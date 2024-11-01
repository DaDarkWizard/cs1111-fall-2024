#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{

    int stackarray[5][4];


    int **heaparray = malloc(20 * sizeof(int) + 5 * sizeof(int*));

    for(int i = 0; i < 5; i++)
    {
        heaparray[i] = (int*)(
                (void*)heaparray +
                (5 * sizeof(int*)) +
                (4 * sizeof(int) * i));
    }

    for(int i = 0; i < 20; i++)
    {
        *((int*)((void*)heaparray +
                5 * sizeof(int*) +
                i * sizeof(int))) = i;
    }


    printf("%d\n", heaparray[1][1]);

    free(heaparray);

    return 0;
}
