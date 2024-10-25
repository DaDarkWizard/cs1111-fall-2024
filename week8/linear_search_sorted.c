/*
 * Demonstration of linear search on a sorted array.
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
    int arr[8] = { 1, 1, 1, 6, 8, 12, 14, 27 };

    // Find the index of various numbers.
    printf("Index of 6: %d\n", search(arr, 8, 6));
    printf("Index of 4: %d\n", search(arr, 8, 7));

    // Ok return.
    return 0;
}

int search(int a[], int size, int x)
{
    // Check every index of the array.
    // Stop if the value at the index is greater than x
    for (int i = 0; i < size && a[i] <= x; i++)
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
  
  
