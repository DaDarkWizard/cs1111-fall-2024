#include <stdio.h>
int main()
{
    int pnew = 10;
    int *pold = &pnew;
    *pold = 11;

    printf("%d\n", pold);
    printf("%d\n", &pold);
    printf("%d\n", *pold);
    printf("%d\n", pnew);
}
