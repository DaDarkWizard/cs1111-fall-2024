/*
 * Program demonstrating the use of function declaration scope.
 *
 * @author Daniel Masker
 * @email dtmasker@mtu.edu
 * @date 9/25/2024
 */

#include <stdio.h>

int num1 = 4;

int scope()
{
    printf("Inside the function: %d\n", num1);
}

int main()
{
    scope();

    return 0;
}


int scope2()
{
    printf("Inside the function: %d\n", num1);
}
