/*
 * Program that asks user favorite ice cream flavor and topping.
 *
 * @author Daniel masker
 * @email dtmasker@mtu.edu
 * @date 9/12/2024
 */

#include <stdio.h>

int main()
{
char *prompt = "What's your favorite ice cream flavor and topping? ";

    while ( 1 )
    {

    // Print a prompt to the user
        printf(prompt);

    // Declare some variables
        char iceCreamFlavor[128];
        char topping[256];

        // Read in user text
        // Assign responses to variables
        scanf("%s %s", iceCreamFlavor, topping);

        // Print out the response
        printf("Your favorite ice cream is %s with %s\n", iceCreamFlavor, topping);
    }

    return 0;

}


