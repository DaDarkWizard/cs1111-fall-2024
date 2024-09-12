#include <stdio.h>

int main()
{
    int age, children;
    printf("How old are you? ");
    scanf("%d", &age);
    printf("How many children do you have? ");
    scanf("%d", &children);

    if ( age >= 65 )
    {
        printf("You qualify for our senior discount!\n");
        printf("This means you only pay half price.\n");

    }
    else
    {
        if ( children >= 2 )
        {
            printf("You qualify for the family discount!\n");
            printf("Everything is 20%% off.\n");
        }
    }
    /*else if ( age < 5 )
    {
        printf("You get in free!\n");
    }
    else
    {
        printf("You do not qualify for a discount.\n");
    }*/

    return 0;
}
