#ifndef UTIL_H
#define UTIL_H

#include <stdio.h>

static inline void logger(char* message) {
    printf("log: %s\n", message);
}

#endif
