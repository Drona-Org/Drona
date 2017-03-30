#include "WorkspaceParser.h"
#include "GazeboWorldGenerator.h"

int main(int argc, char const *argv[])
{

    WorkspaceInfo* ws_info = ParseWorkspaceConfig(argv[1]);
    printf("Successfully parsed %s\n", argv[1]);
    cout << (ws_info->ToString());
    FreeWorkspaceInfo(ws_info);

    GazeboWorldGenerator *gazebo = new GazeboWorldGenerator();
    gazebo->GenerateWorld(argv[1],argv[2]);

    return 0;

}
