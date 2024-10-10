#include <stdio.h>


void explicitSize(int arraySize, int myArray[arraySize])
{
    for(int i = 0; i < arraySize; i++)
    {
        myArray[i] = i + 1;
    }
}



void calculatedSize(int arraySize, int myArray[arraySize])
{
    int arraySize = 3;

    arraySize = sizeof(myArray) / sizeof(myArray[0]);

    for(int i = 0; i < arraySize; i++)
    {
        myArray[i] = i + 1;
    }
}

int main()
{
    int myArray[6];

    calculatedSize(myArray);
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    printf("%d %d %d", myArray[0], myArray[1], myArray[2]);
    printf("\n%d\n", arraySize);
}


