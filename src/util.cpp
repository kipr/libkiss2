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

// Adapted from:
// http://stackoverflow.com/questions/11946622/implementation-of-random-number-generator

static unsigned int kiss_seed = 1;

void kiss_srand(int seed)
{
	kiss_seed = ((unsigned int)seed) & 0x7fffffffU;
}

int kiss_rand()
{
	kiss_seed = (kiss_seed * 1103515245U + 12345U) & 0x7fffffffU;
	return (int)kiss_seed;
}