#include "kiss/util.h"

#include <unistd.h>

void fsleep(double seconds)
{
	usleep(seconds * 1000000.0);
}

void msleep(long milliseconds)
{
	usleep(milliseconds * 1000);
}