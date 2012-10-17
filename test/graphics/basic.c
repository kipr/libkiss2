#include <kiss/kiss.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	if(!graphics_open(640, 480)) return 0;
	
	while(1) {
		usleep(1);
		graphics_rectangle(0, 0, 30, 30, 255, 0, 0);
		graphics_update();
	}
	
	graphics_close();
	
	return 0;
}