/*********************************************************************
* Software License Agreement (BSD License)
*
*  Copyright (c) 2011, Rice University
*  All rights reserved.
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*
*   * Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*   * Redistributions in binary form must reproduce the above
*     copyright notice, this list of conditions and the following
*     disclaimer in the documentation and/or other materials provided
*     with the distribution.
*   * Neither the name of the Rice University nor the names of its
*     contributors may be used to endorse or promote products derived
*     from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
*  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
*  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
*  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
*  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
*  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
*  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
*  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
*  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
*  POSSIBILITY OF SUCH DAMAGE.
*********************************************************************/

/* Author: Luis G. Torres, Jonathan Gammell */

#include <ompl/base/SpaceInformation.h>
#include <ompl/base/objectives/PathLengthOptimizationObjective.h>
#include <ompl/base/objectives/StateCostIntegralObjective.h>
#include <ompl/base/objectives/MaximizeMinClearanceObjective.h>
#include <ompl/base/spaces/RealVectorStateSpace.h>
// For ompl::msg::setLogLevel
#include "ompl/util/Console.h"

// The supported optimal planners, in alphabetical order
#include <ompl/geometric/planners/bitstar/BITstar.h>
#include <ompl/geometric/planners/cforest/CForest.h>
#include <ompl/geometric/planners/fmt/FMT.h>
#include <ompl/geometric/planners/fmt/BFMT.h>
#include <ompl/geometric/planners/prm/PRMstar.h>
#include <ompl/geometric/planners/rrt/InformedRRTstar.h>
#include <ompl/geometric/planners/rrt/RRTstar.h>
#include <ompl/geometric/planners/rrt/SORRTstar.h>


// For boost program options
#include <boost/program_options.hpp>
// For string comparison (boost::iequals)
#include <boost/algorithm/string.hpp>
// For std::make_shared
#include <memory>
#include <vector>
#include <WorkspaceParser.h>
#include <fstream>

namespace ob = ompl::base;
namespace og = ompl::geometric;
/// @cond IGNORE

#ifndef OMPLPLANNER_H
#define OMPLPLANNER_H


#include <vector>
#include <time.h>
#include <WorkspaceParser.h>

using namespace std;

// An enum of supported optimal planners, alphabetical order
enum optimalPlanner
{
    PLANNER_BFMTSTAR,
    PLANNER_BITSTAR,
    PLANNER_CFOREST,
    PLANNER_FMTSTAR,
    PLANNER_INF_RRTSTAR,
    PLANNER_PRMSTAR,
    PLANNER_RRTSTAR,
    PLANNER_SORRTSTAR,
};

// An enum of the supported optimization objectives, alphabetical order
enum planningObjective
{
    OBJECTIVE_PATHCLEARANCE,
    OBJECTIVE_PATHLENGTH,
    OBJECTIVE_THRESHOLDPATHLENGTH,
    OBJECTIVE_WEIGHTEDCOMBO
};

// Our "collision checker". For this demo, our robot's state space
// lies in [0,1]x[0,1], with a circular obstacle of radius 0.25
// centered at (0.5,0.5). Any states lying in this circular region are
// considered "in collision".
class ValidityChecker : public ob::StateValidityChecker
{
     WorkspaceInfo *WSInfo;
public:
    ValidityChecker(const ob::SpaceInformationPtr& si, WorkspaceInfo *ws) :
        ob::StateValidityChecker(si) {
        WSInfo = ws;
    }

    // Returns whether the given state's position overlaps the
    // circular obstacle
    bool isValid(const ob::State* state) const override
    {
        return this->clearance(state) > 0.0;
    }

    double clearance(const ob::State* state) const override
    {
        // We know we're working with a RealVectorStateSpace in this
        // example, so we downcast state into the specific type.
        const auto* state3D =
            state->as<ob::RealVectorStateSpace::StateType>();

        // Extract the robot's (x,y) position from its state
        double x = state3D->values[0];
        double y = state3D->values[1];
        double z = state3D->values[2];

        for(int i = 0; i< WSInfo->obstacles.size();i++)
        {
            if(((WS_Box)(WSInfo->obstacles.at(i))).IsInBox(WS_Coord(x, y, z)))
            {
                return -1;
            }
        }
        return 1;
    }
};

class OMPLPLanner {
public:
    WorkspaceInfo *WSInfo;
    optimalPlanner plannerType;
    planningObjective objectiveType;

    OMPLPLanner(const char* workspacefile, optimalPlanner _plannerType, planningObjective _objectiveType)
    {
        WSInfo = ParseWorkspaceConfig(workspacefile);
        plannerType = _plannerType;
        objectiveType = _objectiveType;
    }

    vector<WS_Coord> GeneratePlan(double runTime,  WS_Coord st, WS_Coord end);
};

#endif