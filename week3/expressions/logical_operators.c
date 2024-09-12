/*
 * Program demonstrating the use of logical operators.
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

    printf("x == 4 && y == 3: %d\n", x == 4 && y == 3);


    printf("x == 4 && y == 3: %d\n", x == 3 && (y = 3));
    printf("x: %d y: %d\n", x, y);


    printf("x == 4 && y == 3: %d\n", x == 4 && (y = 3));
    printf("x: %d y: %d\n", x, y);
    
    printf("!x: %d\n", !x);

    return 0;
}
