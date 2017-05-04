/**************************************************
This file implements the surveillance application for drones
***************************************************/
event eAddSurveyPoint: (int, WS_Coord);
event eRemoveSurveyPoint: WS_Coord;
event local;

machine AdaptiveSurveillanceMission {
    //list of all the points in workspace to survey.
    var surveyPoints : seq[WS_Coord];

    start state Init {
        entry (payload: seq[WS_Coord]){
            surveyPoints = payload;
            raise local;
        }

        on local push StartSurveillance;
        on eAddSurveyPoint do (payload: (int, WS_Coord)){ surveyPoints[payload.0] = payload.1; }
        on eRemoveSurveyPoint do (payload: WS_Coord) { 
            var index: int;
            while(index > 0)
            {
                if(surveyPoints[index] == payload)
                {
                    surveyPoints -= (index);
                    return;
                }
                else
                {
                    index = index + 1;
                }
            }
        }
    }

    
    var nextPoistion : int;
    state StartSurveillance {
        entry {
            //Compute the path to next location
            send motionplanner, eComputeMotionPlan, surveyPoints[nextPoistion];
        }
        on eMotionPlan goto StartExecutingMotionPlan;
        on eComputeMotionPlanFailed goto StartSurveillance with {
            print "Computing Motion Plan for location {0} failed", surveyPoints[nextPoistion];
        }
        exit {
            nextPoistion = nextPoistion + 1;
        }
    }

    state StartExecutingMotionPlan {
        entry (payload: seq[WS_Coord]){
            //send motion plan to plan executor module
            send planexecutor, eExecuteMotionPlan, payload;
        }
        on eReachedGoalLocation goto StartSurveillance;
        on ePlanExecutorAborted goto StartSurveillance with {
            print "Execution of current plan has been aborted !!";
        };
    }
}