/*
 * Program demonstrating the use of global variables.
 *
 * @author Daniel Masker
 * @email dtmasker@mtu.edu
 * @date 9/25/2024
 */

#include <stdio.h>

int num1 = 8;

int scope();

int main()
{
    printf("Before the function: %d\n", num1);
    scope();
    printf("After the function: %d\n", num1);

    int num1 = 16;
    printf("After the declaration: %d\n", num1);
    scope();

    return 0;
}

int scope()
{
    printf("Inside the function: %d\n", num1);
}
