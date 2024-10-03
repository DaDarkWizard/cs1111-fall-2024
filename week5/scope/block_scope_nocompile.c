/*
 * Program demonstrating the misuse of scope.
 *
 * @author Daniel Masker
 * @email dtmasker@mtu.edu
 * @date 9/25/2024
 */

#include <stdio.h>

int scope();

int main()
{
    int x = 8;

    printf("Before the function: %d\n", x);
    scope();
    printf("After the function: %d\n", x);

    return 0;
}

void scope()
{
    printf("Inside the function: %d\n", x);
}
