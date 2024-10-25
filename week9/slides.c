#include <stdio.h>
void m(int **p)
{
    int i = 0;
    for(i = 0;i < 5; i++)
         printf("%d\t", p[0][i]);
}
void main(int argc, char **argv)
{
    int a[5][2] = {6, 5, 3};
    int *p = a;
    m(&p);


}

