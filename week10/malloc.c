#include <stdio.h>
#include <stdlib.h>

int main()
{
    // When testing, setting a smaller size will let it run faster.
    int size = 1000;
    // Dynamically allocate array - this isn't fitting on the stack
    int *array = malloc(size * sizeof(int));
    //int array[size];
    printf("Memory location: 0x%x\n", array);

    // Scan input.
    for(int i = 0; i < size; i++)
    {
        scanf("%d", array + i);
    }

    // UPDATE THIS LINE
    //sortName(array, size);

    // Print output
    for(int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }

    // Free our dynamically allocated array.
    // free(array);
    
    return 0;
}
