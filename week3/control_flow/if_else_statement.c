#include <stdio.h>

int main()
{
    int age;
    printf("How old are you? ");
    scanf("%d", &age);

    if ( age >= 65 )
    {
        printf("You qualify for our senior discount!\n");
        printf("This means you only pay half price.\n");
    }
    else
    {
        printf("You do not qualify for a discount.\n");
    }

    return 0;
}
