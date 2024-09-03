/*
 * Demonstrates usage of floats and doubles.
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
    double num1;
    double num2;
    double sum;

    // Assign a value.
    num1 = 3.2;
    num2 = 5.89;
    sum = num1 + num2;

    // Print the values.
    printf("The total is %lf\n", sum);
    
    // Precision example:
    printf("2.0 is %.32lf\n", 2.0);
    printf("sqrt(2.0) * sqrt(2.0) is %.32lf\n", sqrt(2.0) * sqrt(2.0));

    // Exit successfully
    return 0;
}
