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
	WS_Coord coord;
	const XMLElement *e = node->ToElement();
	if(!e)
		throw std::runtime_error("Not a valid coordinate element");
	coord.x = e->IntAttribute("x");
	coord.y = e->IntAttribute("y");
	coord.z = e->IntAttribute("z");
	return coord;
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

WS_LocationsList ParseListOfCoordinates(const XMLNode* node, WS_Dimension dim)
{
	WS_LocationsList locations;
	locations.size = CountXMLChild(node, "coord");
	locations.locations = (int*)malloc(sizeof(int) * locations.size);
	int count = 0;
	for(const XMLElement* nodeIter = node->FirstChildElement("coord"); 
		nodeIter != NULL; 
		nodeIter = nodeIter->NextSiblingElement("coord"))
	{
		locations.locations[count++] = ConvertCoordToGridLocation(ParseXMLCoord(nodeIter), dim);
	}
	return locations;
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
		workspace_info->numOfRobots = CountXMLChild(tmp, "robot");
		workspace_info->robots = (WS_RobotInfo*)malloc(sizeof(WS_RobotInfo) * workspace_info->numOfRobots);
		int count = 0;
		for(const XMLElement* nodeIter = tmp->FirstChildElement("robot"); 
			nodeIter != NULL; 
			nodeIter = nodeIter->NextSiblingElement("robot"))
		{
			WS_RobotInfo& robot_info = workspace_info->robots[count++]; 
			robot_info.id = nodeIter->IntAttribute("id");
			robot_info.start_position = ConvertCoordToGridLocation(ParseXMLCoord(ParseXMLChildElement(nodeIter, "start")), workspace_info->dimension);
		}
	}
	if(tmp = ParseXMLChildElement(configuration, "obstacles")) {
		workspace_info->obstacles = ParseListOfCoordinates(tmp, workspace_info->dimension);
	}
	if(tmp = ParseXMLChildElement(configuration, "charging_stations")) {
		workspace_info->charging_stations = ParseListOfCoordinates(tmp, workspace_info->dimension);
	}
	return workspace_info;
}

void FreeWorkspaceInfo(WorkspaceInfo* info)
{
	free(info->obstacles.locations);
	free(info->robots);
	free(info);
}

#ifdef TEST_WS_PARSER
int main(int argc, char const *argv[])
{
	WorkspaceInfo* ws_info = ParseConfiguration(argv[1]);
	printf("Successfully parsed %s\n", argv[1]);
	FreeWorkspaceInfo(ws_info);
	return 0;
}
#endif
