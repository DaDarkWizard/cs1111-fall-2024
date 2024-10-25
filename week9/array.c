#include <stdio.h>
int main() 
{
    char array1[] = { 'c', 'a', 't', 0 };
    char *dog = "dog";
    int x = 6;
    char *arrayP = array1;
    long *y = (long *)(&x);

    printf("%d\n", arrayP[-1]);
    printf("%d\n", y[1]);


    for (char *i = dog; *i > 0; i += 1)
    {
        printf("%c", *i);
    }

    printf("\n");

    printf("%d %d\n", y, y + 2);
}
