#include <stdio.h>

static int glob1 = 4;

int functionB()
{
    static int num1 = 0;
    printf("num1 value: %d\n", num1);
    num1++;
    return num1;
}

int main()
{
    functionB();
    functionB();
    functionB();
    functionB();
    functionB();
    functionB();
    return 0;
}
