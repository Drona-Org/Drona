#include "WorkspaceParser.h"
#include "tinyxml2.h"
#include <string.h>
#include <stdexcept>

using namespace tinyxml2;

WorkspaceInfo* WORKSPACE_INFO;

const XMLNode* ParseXMLChildElement(const XMLNode* node, const char* optionName)
{
	const XMLNode *ret = node->FirstChildElement(optionName);
	if(!ret) {
		throw std::runtime_error(std::string("Failed to parse, ") + std::string(optionName) + std::string(" is required"));
	}
	return ret;
}

WS_Coord ParseXMLCoord(const XMLNode* node)
{
	const XMLElement *e = node->ToElement();
	if(!e)
		throw std::runtime_error("Not a valid coordinate element");
    return WS_Coord(e->IntAttribute("x"), e->IntAttribute("y"), e->IntAttribute("z"));
}

WS_Box ParseXMLBox(const XMLNode* node)
{
    const XMLElement *e = node->ToElement();
    if(!e)
        throw std::runtime_error("Not a valid coordinate element");
    WS_Box ret;
    ret.low = ParseXMLCoord(node->FirstChildElement("low"));
    ret.high = ParseXMLCoord(node->FirstChildElement("high"));
    return ret;
}

int CountXMLChild(const XMLNode* node, const char* name) 
{
	int count = 0;
	for(const XMLElement* nodeIter = node->FirstChildElement(name); 
		nodeIter != NULL; 
		nodeIter = nodeIter->NextSiblingElement(name))
	{
		count++;
	}
	return count;
}

vector<WS_Box> ParseListOfBoxes(const XMLNode* node, WS_Dimension dim)
{
    vector<WS_Box> boxes;
    for(const XMLElement* nodeIter = node->FirstChildElement("box");
		nodeIter != NULL; 
        nodeIter = nodeIter->NextSiblingElement("box"))
	{
        boxes.push_back(ParseXMLBox(nodeIter));
	}
    return boxes;
}

WorkspaceInfo* ParseWorkspaceConfig(const char* configurationFile)
{
	WorkspaceInfo *workspace_info = (WorkspaceInfo*)malloc(sizeof(WorkspaceInfo));

	XMLDocument configDoc;
    configDoc.LoadFile(configurationFile);

    const XMLNode* configuration = ParseXMLChildElement(&configDoc, "configuration");
	const XMLNode* tmp;
	if(tmp = ParseXMLChildElement(configuration, "dimension")) {
		WS_Coord tmp_coord = ParseXMLCoord(tmp);
		workspace_info->dimension = *((WS_Dimension*)&tmp_coord);
	}
	if(tmp = ParseXMLChildElement(configuration, "robots")) {
		for(const XMLElement* nodeIter = tmp->FirstChildElement("robot"); 
			nodeIter != NULL; 
			nodeIter = nodeIter->NextSiblingElement("robot"))
		{ 
            WS_RobotInfo robot_info;
			robot_info.id = nodeIter->IntAttribute("id");
            robot_info.startingLocation = ParseXMLCoord(ParseXMLChildElement(nodeIter, "start"));
            workspace_info->robots.push_back(robot_info);
		}
	}
	if(tmp = ParseXMLChildElement(configuration, "obstacles")) {
        workspace_info->obstacles = ParseListOfBoxes(tmp, workspace_info->dimension);
	}
	if(tmp = ParseXMLChildElement(configuration, "charging_stations")) {
        workspace_info->charging_stations = ParseListOfBoxes(tmp, workspace_info->dimension);
	}
	return workspace_info;
}

void FreeWorkspaceInfo(WorkspaceInfo* info)
{
	free(info);
}

