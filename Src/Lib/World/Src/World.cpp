#include "World.h"

World::World(char* wordName){

    // TODO (tom): get flexible bounds
    coord lc = {-10,-10,0};
    coord uc = {10,10,0};
    this->map = new Map(lc,uc);

    this->file.open(wordName);

    // Initialize the model
    this->iOut("<?xml version=\"1.0\" ?>",0);
    this->iOut("<sdf version=\"1.5\">",0);
    this->iOut("<world name=\"default\">",1);

    // Sun and ground plane
    this->include(" <uri>model://sun</uri>",2);
    this->include(" <uri>model://ground_plane</uri>",2);
    this->include(" <uri>model://iris</uri>",2);

    this->physics(2);


}

// Box centered in (x,y,z) with size (lx*ly*lz)
void World::Box(coord c, int lx, int ly, int lz){

    this->iOut("<model name='unit_box'>",2);

    this->file<<"\t\t\t"<<"<pose frame=''>"<<c.x+((float)lx/2)<<" "<<c.y+((float)ly/2)<<" "<<c.z+((float)lz/2)<<" 0 0 0</pose>\n";
    this->iOut("<link name='link'>",3);
    this->iOut("<inertial>",4);
    this->iOut("<mass>1</mass>",5);
    this->iOut("<inertia>",5);
    this->iOut("<ixx>0.166667</ixx>",6);
    this->iOut("<ixy>0</ixy>",6);
    this->iOut("<ixz>0</ixz>",6);
    this->iOut("<iyy>0.166667</iyy>",6);
    this->iOut("<iyz>0</iyz>",6);
    this->iOut("<izz>0.166667</izz>",6);
    this->iOut("</inertia>",5);
    this->iOut("</inertial>",4);
    this->iOut("<collision name='collision'>",4);
    this->iOut("<geometry>",5);
    this->iOut("<box>",6);
    this->file<<"\t\t\t\t\t\t\t<size>"<<lx<<" "<<ly<<" "<<lz<<"</size>\n";
    this->iOut("</box>",6);
    this->iOut("</geometry>",5);
    this->iOut("<max_contacts>10</max_contacts>",5);
    this->iOut("<surface>",5);
    this->iOut("<contact>",6);
    this->iOut("<ode/>",7);
    this->iOut("</contact>",6);
    this->iOut("<bounce/>",6);
    this->iOut("<friction>",6);
    this->iOut("<torsional>",7);
    this->iOut("<ode/>",8);
    this->iOut("</torsional>",7);
    this->iOut("<ode/>",7);
    this->iOut("</friction>",6);
    this->iOut("</surface>",5);
    this->iOut("</collision>",4);
    this->iOut("<visual name='visual'>",4);
    this->iOut("<geometry>",5);
    this->iOut("<box>",6);
    this->file<<"\t\t\t\t\t\t\t<size>"<<lx<<" "<<ly<<" "<<lz<<"</size>\n";
    this->iOut("</box>",6);
    this->iOut("</geometry>",5);
    this->iOut("<material>",5);
    this->iOut("<script>",6);
    this->iOut("<name>Gazebo/Grey</name>",7);
    this->iOut("<uri>file://media/materials/scripts/gazebo.material</uri>",7);
    this->iOut("</script>",6);
    this->iOut("</material>",5);
    this->iOut("</visual>",4);
    this->iOut("<self_collide>0</self_collide>",4);
    this->iOut("<kinematic>0</kinematic>",4);
    this->iOut("</link>",3);
    this->iOut("</model>",2);

}


// <include>
void World::include(char* str, int inds){

    this->iOut("<include>",inds);
    this->iOut(str,inds+1);
    this->iOut("</include>",inds);
}

// <physics>
void World::physics(int inds){

    this->iOut("<physics name='default_physics' default='0' type='ode'>",inds);
    this->iOut("<gravity>0 0 -9.8066</gravity>",inds+1);
    this->iOut("<ode>",inds+1);
    this->iOut("<solver>",inds+2);
    this->iOut("<type>quick</type>",inds+3);
    this->iOut("<iters>10</iters>",inds+3);
    this->iOut("<sor>1.3</sor>",inds+3);
    this->iOut("<use_dynamic_moi_rescaling>0</use_dynamic_moi_rescaling>",inds+3);
    this->iOut("</solver>",inds+2);
    this->iOut("<constraints>",inds+2);
    this->iOut("<cfm>0</cfm>",inds+3);
    this->iOut("<erp>0.2</erp>",inds+3);
    this->iOut("<contact_max_correcting_vel>100</contact_max_correcting_vel>",inds+3);
    this->iOut("<contact_surface_layer>0.001</contact_surface_layer>",inds+3);
    this->iOut("</constraints>",inds+2);
    this->iOut("</ode>",inds+1);
    this->iOut("<max_step_size>0.002</max_step_size>",inds+1);
    this->iOut("<real_time_factor>1</real_time_factor>",inds+1);
    this->iOut("<real_time_update_rate>500</real_time_update_rate>",inds+1);
    this->iOut("<magnetic_field>6e-06 2.3e-05 -4.2e-05</magnetic_field>",inds+1);
    this->iOut("</physics>",inds);

}

// Prinst str in file with inds indentation level
void World::iOut(char* str, int inds){

    for(int i=0; i<inds; i++){
        this->file<<"\t";
    }
    this->file<<str;
    this->file<<"\n";
}

void World::CloseWorld(){

    this->iOut("</world>",1);
    this->iOut("</sdf>",0);

    this->file.close();
}




