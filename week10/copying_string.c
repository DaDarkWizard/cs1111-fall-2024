#include <string.h>
#include <stdio.h>

int main()
{
    char *mystring = "Hi there!";

    char buffer[120];

    int myarray[5][4];


    int *myarray = malloc(20 * sizeof(int));

    strcpy(buffer, mystring);

    printf("%s\n", buffer);

    return 0;
}
