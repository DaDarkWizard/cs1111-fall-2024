#include <stdio.h>

void swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

void cubed(int *a)
{
    *a = (*a) * (*a) * (*a);
}

void cubed2(long a)
{
    a = a * a * a;
}


int main()
{
    int x = 3, y =5;
    int *x = NULL;

    printf("%d, %d\n", x, y);
    printf("%ld, %ld\n", &x, &y);
    printf("sizes: %d %d\n", sizeof(x), sizeof(&x));
    cubed(&x);
    printf("%d, %d\n", x, y);
}
