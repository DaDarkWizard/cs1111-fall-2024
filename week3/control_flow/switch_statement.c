#include <stdio.h>

int main()
{
    int age;
    printf("How old are you? ");
    scanf("%d", &age);

    switch ( age ) 
    {
        case 1:
            {
            int age2 = age;
            printf("You're too young.\n");
            break;
            }
        case 2:
            {
            int age2 = age;
            printf("You're a toddler!\n");
            break;
            }
        default:
            printf("You're too old!");
            break;
    }

    return 0;
}
