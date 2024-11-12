#include <stdio.h>
#include <stdlib.h>

int myFunc(int *myArray)
{
}

int main()
{
    char myCharArray[15] = {'H', 'e', 'l', 'l', 'o'};

    char *myCharPointer = myCharArray;

    int *myInt = malloc(1);
    myInt[0] = 6;

    int *myIntP = myInt;
    
    myFunc(myInt);

    printf("Second letter: %c\n", myCharArray[1]);
    printf("Second letter: %c\n", *(myCharPointer + 1));
}
