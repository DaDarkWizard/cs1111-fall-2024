/*
 * Demonstrates usage of ints.
 *
 * @name: Daniel Masker
 * @email: dtmasker@mtu.edu
 * @date: 9/4/2024
 */

#include <stdio.h>
#include <limits.h>

int main()
{
    // Declare our values.
    int minimumNumber = INT_MIN;
    int maximumNumber = INT_MAX;

    // Print the values.
    printf("The maximum value of an integer is %d\n", maximumNumber);
    printf("The minimum value of an integer is %d\n", minimumNumber);
    printf("The maximum value + 1 = %d\n", maximumNumber + 1);

    // Exit successfully
    return 0;
}
