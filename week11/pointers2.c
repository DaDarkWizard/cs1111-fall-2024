#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myFunc(int *myArray)
{
}

int main()
{
    char myCharArray[11] = {'H', 'e', 'l', 'l', 'o', 0, 'S', 't', 'r', '2', 0};

    char *myCharPointer = malloc(6);
    char *myCharPointer2 = &myCharArray[7];
    char **cP1 = &myCharPointer;
    char ***cP2 = &cP1;
    char ****cP3 = &cP2;

    strcpy(myCharPointer, myCharArray);

    printf("string: %s\n", myCharArray);
    //printf("string: %s\n", *myCharPointer);
    printf("string: %s\n", ***cP3);
    printf("string: %s\n", myCharPointer2);

    free(myCharPointer);
}
