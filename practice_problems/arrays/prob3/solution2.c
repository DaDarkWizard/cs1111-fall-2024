/*
 * Print all values of the given array.
 */

#include <stdio.h>

int main()
{
    int numbers[5] = { 2, 5, 6, 7, 8 };

    printf("[ ");

    for ( int i = 0; i < 4; i++ )
    {
        printf("%d, ", numbers[i]);
    }

    printf("%d ]\n", numbers[4]);
}
