/*
 * Make an array of size 5, set the first value to 1,
 * and fill the rest from user input.
 */

#include <stdio.h>

int main()
{
    int numbers[5];

    // Set the first value to 1.
    numbers[0] = 1;

    // Fill the rest from user input.
    for (int i = 1; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }
}
