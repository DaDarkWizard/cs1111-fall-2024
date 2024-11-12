#include <stdio.h>
#include <stdlib.h>

// Declare a structure with a size and values.
struct Array_t {
    int size; // An int takes 4 bytes on my laptop
    int *values; // A pointer takes 8 bytes
}; // So the whole structure is 12 bytes.

// Declare another structure using structures.
struct ThreeArrays_t {
    struct Array_t first; // This variable is our structure that takes 12
                          // bytes
    struct Array_t second; // Another 12 bytes
    struct Array_t third; // Another 12 bytes
}; // So the whole thing is 36 bytes.

// Rename the structure so we don't have to use 'struct Array_t' all the time.
// Instead we can just use Array.
typedef struct Array_t Array;

// Rename our other structure.
typedef struct ThreeArrays_t ThreeArrays;

int main()
{
    // Declare one array structure as a variable.
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


    // Declare a second array as a pointer.
    Array *secondArray = malloc(sizeof(Array));

    // Declare our ThreeArrays struct as a variable.
    ThreeArrays myThree;

    // Initialize the first array in the struct.
    // In ThreeArrays, 'first' is a value (not a pointer), so
    // we use the '.' to access it's values.
    myThree.first.size = 1;
    myThree.first.values = malloc(sizeof(int) * 1);
}
