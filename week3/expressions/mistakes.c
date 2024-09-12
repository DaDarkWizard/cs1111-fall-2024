/*
 * Program demonstrating common mistakes.
 *
 * @author Daniel Masker
 * @email dtmasker@mtu.edu
 * @date 9/10/2024
 */

#include <stdio.h>

int main()
{
    int x = 4;

    printf("x >= 3: %d\n", x >= 3);

    printf("x = 2: %d\n", 4 = 2);
    printf("x: %d\n", x);

    return 0;
}
