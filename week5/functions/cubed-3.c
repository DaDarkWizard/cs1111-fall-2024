/*
 * Program demonstrating the use of call by value.
 *
 * @author Daniel Masker
 * @email dtmasker@mtu.edu
 * @date 9/24/2024
 */

#include <stdio.h>

// Function prototype.
int cubeByValue(int number);
int maximum(int a, int b, int c);

int global;

int main(void)
{
    int number = 5;
    printf("The old value of number is %d\n", number);
    number = maximum(number, 7, 9);
    printf("The new value of number is %d\n", number);

    return 0;
}

// Function declaration.
int cubeByValue(int number)
{
    number = number * number * number;
    return number;
}

int maximum(int a, int b, int c)
{
    int max = a;

    if ( max < b )
    {
        max = b;
    }

    if ( max < c )
    {
        max = c;
    }

    return cubeByValue(max);
}
