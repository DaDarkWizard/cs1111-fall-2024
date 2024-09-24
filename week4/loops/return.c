/*
 * Program that returns.
 *
 * @author Daniel masker
 * @email dtmasker@mtu.edu
 * @date 9/17/2024
 */

#include <stdio.h>

int main()
{

    // Declare our variables.
    int userInput = 0;

    printf("What is 8 + 3? ");
    scanf("%d", &userInput);

    while ( userInput != 11 )
    {
        printf("Incorrect! Try again? ");
        scanf("%d", &userInput);
        return 0;
    }

    printf("That's correct!\n");

    return 0;

}


