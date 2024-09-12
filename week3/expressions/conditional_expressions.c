/*
 * Program demonstrating the use of conditional expressions.
 *
 * @author Daniel Masker
 * @email dtmasker@mtu.edu
 * @date 9/10/2024
 */

#include <stdio.h>

int main()
{
    int x = 4;
    int y = 1;


    // Method 1
    printf("Largest: %s\n", y > x ? "y" : "x");


    // Method 2
    printf("Largest: ");

    y > x ? printf("y") : printf("x");

    printf("\n");

    return 0;
}
