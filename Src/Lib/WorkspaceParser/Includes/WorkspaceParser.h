
#ifndef DRONA_WS_PARSER
#define DRONA_WS_PARSER

#include "Workspace.h"

#ifdef __cplusplus
extern "C" {
#define BOOLEAN bool
#endif

/*
Function to parse the workspace configuration
*/
WorkspaceInfo* ParseWorkspaceConfig(const char* configurationFile);

/*
Free the workspace configuration
*/
void FreeWorkspaceInfo(WorkspaceInfo* info);

#ifdef __cplusplus
}
#endif

#endif
