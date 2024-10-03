#include <stdio.h>
#include <limits.h>

int main() {
    int numberCount = 100;
    int numbers[3];
    int numbers2[3];


    numbers[0] = 3;
    numbers[1] = 4;
    numbers[2] = 6;


    // Out of bounds access
    // numbers[3] = 7;

    printf("Give 100 values: ");

    // Read everything in
    // for ( int i = 0; i < numberCount; i++ )
    // {
    //     scanf("%d", &numbers[i]);
    // }


    // Print everything out
    for ( int i = 0; i < numberCount; i++ )
    {
        //printf("%d ", numbers[i]);
    }

    
    // Print everything out
    // for ( int i = 0; i < numberCount + 10000000; i++ )
    // {
    //     printf("%d ", numberCount);
    //     numbers[i] = 4;
    // }

    numbers[-3] = 56;
    printf("Numbers2: %d\n", numbers2[0]);

}

