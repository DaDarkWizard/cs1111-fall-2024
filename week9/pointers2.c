#include <stdio.h>

void swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}


int main()
{
    int a = 3, b = 5;
    
    int *x = NULL;

    x = &a;

    int *y = &b;

    printf("%d, %d\n", *x, *y);
    printf("0x%x, 0x%x\n", x, y);
    swap(x, y);
    printf("%d, %d\n", *x, *y);
    printf("%d, %d\n", x, y);
}
