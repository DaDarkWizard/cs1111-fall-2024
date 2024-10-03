#include "filea.h"

#include <stdio.h>

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
