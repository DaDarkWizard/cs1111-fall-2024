/*
 * Demonstrates usage of casting.
 *
 * @name: Daniel Masker
 * @email: dtmasker@mtu.edu
 * @date: 9/4/2024
 */

#include <stdio.h>
#include <math.h>

int main()
{
    // Declare our values.
    int num1;
    int num2;
    double result;

    // Assign a value.
    num1 = 3;
    num2 = 2;

    // Demonstrate casting.
    result = num1 / num2;
    printf("The result is %lf\n", result);

    result = (double) num1 / num2;
    printf("The result is %lf\n", result);

    result = (double) ( num1 / num2 );
    printf("The result is %lf\n", result);

    // Exit successfully
    return 0;
}
