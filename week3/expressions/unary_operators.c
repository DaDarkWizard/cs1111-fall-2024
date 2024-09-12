/*
 * Program demonstrating the use of unary operator expressions.
 *
 * @author Daniel Masker
 * @email dtmasker@mtu.edu
 * @date 9/10/2024
 */

#include <stdio.h>

int main()
{
    int x = 4;

    printf("This is the result of a postfix increment: %d\n", x++);
    printf("This is the result of a postfix increment: %d\n", x);
    
    printf("This is the result of a prefix increment: %d\n", ++x);
    printf("This is the result of a prefix increment: %d\n", x);


    printf("The address of x is 0x%ld\n", &x);
    printf("The size of x is %d\n", sizeof(x));

    return 0;
}
