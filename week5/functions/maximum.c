/*
 * Program demonstrating the use of functions.
 *
 * @author Daniel Masker
 * @email dtmasker@mtu.edu
 * @date 9/24/2024
 */

#include <stdio.h>

// Function prototype.
#include "maximum.h"

int main()
{
    int num1, num2, num3;

    printf("Please enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Function call.
    printf("The max is %d\n", maximum(num1, num2, num3));

    return 0;
}

// Function declaration.
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

    return max;
}
