#include "World.h"

World::World(char* wordName){

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
    this->file.close();
}




