#include <stdio.h>

void swap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}


int main()
{
    int x = 3, y =5;
    printf("%d, %d\n", x, y);
    swap(x, y);
    printf("%d, %d\n", x, y);
}
