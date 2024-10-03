/*
 * Program demonstrating the use of block scope.
 *
 * @author Daniel Masker
 * @email dtmasker@mtu.edu
 * @date 9/25/2024
 */

#include <stdio.h>

int main()
{
    // These have block scope.
    int num1 = 8;

    {
        int num1 = 16;
        printf("Inside the block: %d\n", num1);
    }

    printf("But after the block: %d\n", num1);

    return 0;
}
