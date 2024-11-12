#include <stdio.h>
#include <stdlib.h>


struct Array_t {
    int size;
    int *values;
};

struct ThreeArrays_t {
    struct Array_t first;
    struct Array_t second;
    struct Array_t third;
};

typedef struct Array_t Array;

typedef struct ThreeArrays_t ThreeArrays;

int main()
{
    Array myArray;
    myArray.size = 3;
    myArray.values = malloc(3 * sizeof(int));


    myArray.values[0] = 1;
    myArray.values[1] = 2;
    myArray.values[2] = 3;

    for(int i = 0; i < myArray.size; i++)
    {
        printf("%d ", myArray.values[i]);
    }
    printf("\n");


    Array *secondArray = malloc(sizeof(Array));

    ThreeArrays myThree;

    myThree.first.size = 1;
    myThree.first.values = malloc(sizeof(int) * 1);


}
