/*
 * Demonstrates reading then adding 2 numbers.
 *
 * @name: Daniel Masker
 * @email: dtmasker@mtu.edu
 * @date: 9/4/2024
 */

#include <stdio.h>

int main()
{
    // Declare our values.
    int num1;
    int num2;
    int sum;

    num1 = 5;

    // Assign our values.
    printf("Please enter number 1:");
    scanf("%d", &num1);
    printf("Please enter number 2:");
    scanf("%d", &num2);

    // Add them together.
    sum = num1 + num2;

    // Print the values.
    printf("The total is %d\n", sum);

    // Exit successfully
    return 0;
}
