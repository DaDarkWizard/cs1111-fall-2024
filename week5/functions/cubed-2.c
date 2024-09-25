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

int main(void)
{
    int number = 5;
    printf("The old value of number is %d\n", number);
    cubeByValue(number);
    printf("The new value of number is %d\n", number);

    return 0;
}

// Function declaration.
int cubeByValue(int number)
{
    number = number * number * number;
    return number;
}
