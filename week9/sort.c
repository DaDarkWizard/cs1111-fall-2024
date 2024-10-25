#include <stdio.h>
#include <stdlib.h>


int main()
{
    int size = 100000;
    int *array = malloc(size * sizeof(int));
    for(int i = 0; i < size; i++)
    {
        scanf("%d", array + i);
    }

    bubbleSort(array, size);

    for(int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }

    free(array);
    
    return 0;
}
