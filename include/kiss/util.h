#ifndef _UTIL_H_
#define _UTIL_H_

#ifdef __cplusplus
extern "C" {
#endif

void fsleep(double seconds);
void msleep(long milliseconds);

void kiss_srand(int seed);
int kiss_rand();

#ifdef __cplusplus
}
#endif

#endif
