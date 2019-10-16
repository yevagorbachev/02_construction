#include<stdlib.h>
#include<time.h>
#include "myrand.h"
int usrand() { // seeds rand with nanosecond time
    struct timespec ts;
    timespec_get(&ts, TIME_UTC);
    srand(ts.tv_nsec);
}

int rand_range(int min, int max) {
    usrand();
    return (rand() % (max - min)) + min;
}

char rand_char(int is_lower) {
    usrand();
    return (rand() % 26) + (is_lower * 32) + 65;
}