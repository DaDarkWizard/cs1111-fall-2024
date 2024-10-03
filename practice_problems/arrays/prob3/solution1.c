/*
 * Print all values of the given array.
 */

#include <stdio.h>

int main()
{
    int numbers[5] = { 2, 5, 6, 7, 8 };

    for ( int i = 0; i < 5; i++ )
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}
