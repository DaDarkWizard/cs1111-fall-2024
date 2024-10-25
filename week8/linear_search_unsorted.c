/*
 * Demonstration of linear search on an unsorted array.
 *
 * @author Dasker
 * @email dtmasker@mtu.edu
 *
 * @date 10/14/2024
 */

#include <stdio.h>

int search(int a[], int size, int x);

int main()
{
    // Initialize our array.
    int arr[8] = { 3, 5, 1, 6, 8, 12, 8, 10 };

    // Find the index of various numbers.
    printf("Index of 6: %d\n", search(arr, 8, 6));
    printf("Index of 4: %d\n", search(arr, 8, 4));
    printf("Index of 8: %d\n", search(arr, 8, 8));

    return 0;
}

int search(int a[], int size, int x)
{
    // Check every index of the array.
    for (int i = 0; i < size; i++)
    {
        // If the value at the index matches, return the index.
        if ( a[i] == x )
        {
            return i;
        }
    }

    // If the code reaches this point, no matches were found, return -1.
    return -1;
}
