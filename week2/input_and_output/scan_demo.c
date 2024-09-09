/*
 * A simple program demonstrating reading in two different values.
 *
 * @author Daniel Masker
 * @email dtmasker@mtu.edu
 * @date 9/9/2024
 */


#include <stdio.h>

int main()
{
    int num1;
    double num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("The first number is %d.\nThe second number is %lf.\n", num1, num2);

    return 0;
}

