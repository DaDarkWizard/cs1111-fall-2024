#include <stdio.h>


void testFunction(int myArray[])
{
    for(int i = 1; i < 4; i++)
    {
        myArray[i - 1] = i;
    }
}

int main()
{
    int myArray[3];

    testFunction(myArray);

    printf("%d %d %d", myArray[0], myArray[1], myArray[2]);
}


