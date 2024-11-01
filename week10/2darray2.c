#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{

    int stackarray[5][4];


    int **heaparray = malloc(sizeof(int*) * 5);

    for(int i = 0; i < 5; i++)
    {
        heaparray[i] = malloc(sizeof(int) * 4);

        for(int j = 0; j < 4; j++)
        {
            heaparray[i][j] = 4 * i + j;
        }
    }


    printf("%d\n", heaparray[1][1]);


    for(int i = 0; i < 5; i++)
    {
        free(heaparray[i]);
    }

    free(heaparray);

    return 0;
}
