/*
 * Program demonstrating a stack overflow.
 *
 * @author Daniel Masker
 * @email dtmasker@mtu.edu
 * @date 9/24/2024
 */

#include <stdio.h>

// Function prototype.
int cubeByValue(int number);

int main(void)
{
    int number = 5;

    number = cubeByValue(number);

    return 0;
}

// Function declaration.
int cubeByValue(int number)
{
    number = number * number * number;
    return cubeByValue(number);
}
