// Created on Tue October 16 2012

#include <blobtastic/blobtastic.h>

int main() 
{
	camera_open();
	
	camera_update();
	graphics_open(get_camera_frame_width(), get_camera_frame_height());
	
	while(1) {
		graphics_blit(get_camera_frame(), 0, 0, get_camera_frame_width(), get_camera_frame_height());
		graphics_update();
		camera_update();
	}
	
	graphics_close();
	camera_close();
	
	return 0;
}
