/*
 * Simple program reading in a double then printing it as an exponent.
 *
 * @author Daniel Masker
 * @email dtmasker@mtu.edu
 * @date 9/9/2024
 */

#include <stdio.h>

int main()
{
	double num1 = 123.456789;

    scanf("%lf", &num1);
	printf("%2.3e\n", num1);

    return 0;
}

