/*
 * Demonstration of binary search on a sorted array.
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
    int arr[8] = { 2, 4, 6, 7, 23, 45, 78, 100 };

    // Find the index of various numbers.
    printf("Index of 6: %d\n", search(arr, 8, 6));
    printf("Index of 4: %d\n", search(arr, 8, 7));

    // Ok return.
    return 0;
}

int search(int a[], int size, int x)
{
    // Initialize left, right, and create variable for mid.
    int left = 0;
    int right = size - 1;
    int mid;
    
    while ( left <= right )
    {
        // Set mid to between left and right.
        mid = ( left + right ) / 2;

        if ( a[mid] == x )
        {
            // If the value at mid matches x, return the value.
            return i;
        }
        else if ( a[mid] > x )
        {
            // If the value is too large, shift the upper limit down.
            right = mid - 1;
        }
        else
        {
            // If the value is too small, shift the lower limit up.
            left = mid + 1;
        }
    }

    return -1;
}
