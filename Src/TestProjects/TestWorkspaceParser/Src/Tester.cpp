#include "WorkspaceParser.h"

int main(int argc, char const *argv[])
{
    WorkspaceInfo* ws_info = ParseWorkspaceConfig(argv[1]);
    printf("Successfully parsed %s\n", argv[1]);
    cout << (ws_info->ToString());
    FreeWorkspaceInfo(ws_info);
    return 0;
}
