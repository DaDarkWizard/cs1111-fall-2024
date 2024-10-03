/*
 * Program demonstrating the use of block scope.
 *
 * @author Daniel Masker
 * @email dtmasker@mtu.edu
 * @date 9/25/2024
 */

#include <stdio.h>

int cubed(int);

int main()
{
    // These have block scope.
    int num1 = 8;

    {
        // This num1 has block scope, inside the smaller block.
        int num1 = cubed(9);
    }

    return 0;
}

int cubed(int number) // 'number' has block scope
{
    return number * number * number;
}
