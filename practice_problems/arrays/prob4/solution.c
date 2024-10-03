/*
 * Make an array of the size the user gives you and fill
 * it with 1
 */

#include <stdio.h>

int main()
{
    printf("What size array? ");

    int arraySize = 0;
    scanf("%d", &arraySize);

    int numbers[arraySize];

    for ( int i = 0; i < arraySize; i++ )
    {
        numbers[i] = 1;
    }
}
