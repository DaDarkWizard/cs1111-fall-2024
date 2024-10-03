#include "filea.h"

#include <stdio.h>

static int glob1 = 4;

int functionB()
{
    return 3;
}

int main()
{
    printf("Global: %d\n", glob1);
    functionA();
    return 0;
}
