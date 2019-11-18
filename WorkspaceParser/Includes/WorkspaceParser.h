#ifndef DRONA_WS_PARSER
#define DRONA_WS_PARSER

#include "Workspace.h"
#include <iostream>

using namespace std;
/*
Function to parse the workspace configuration
*/
WorkspaceInfo* ParseWorkspaceConfig(const char* configurationFile);

/*
Free the workspace configuration
*/
void FreeWorkspaceInfo(WorkspaceInfo* info);

#endif
