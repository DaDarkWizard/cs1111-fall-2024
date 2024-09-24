/*
 * Program that sums 1 to 1000
 *
 * @author Daniel masker
 * @email dtmasker@mtu.edu
 * @date 9/17/2024
 */

#include <stdio.h>

int main()
{

    // Declare our variables.
    int sum = 0;

    for ( int i = 1; i <= 1000; i++ ) 
    {
        sum = i + sum;
    }

    printf("Total sum: %d\n", sum);

    return 0;

}


