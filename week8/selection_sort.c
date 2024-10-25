/*
 * Demonstration of sort then search on an array.
 *
 * @author Dasker
 * @email dtmasker@mtu.edu
 *
 * @date 10/14/2024
 */

#include <stdio.h>

int search(int a[], int size, int x);
void sort(int a[], int size);

int main()
{
    // Initialize our array.
    int arr[8] = { 3, 5, 1, 6, 8, 12, 8, 10 };

    sort(arr, 8);

    // print the array
    for(int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Check every value from 0 to 12
    for(int i = 0; i <= 12; i++)
    {
        printf("Index of %d: %d\n", i, search(arr, 8, i));
    }

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
            return mid;
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

void sort(int a[], int size)
{
    int minValue;
    int minIndex;

    for ( int i = 0; i < size; i++ )
    {
        minValue = a[i];
        minIndex = i;
        for ( int j = i; j < size; j++ )
        {
            if ( a[j] < minValue )
            {
                minValue = a[j];
                minIndex = j;
            }
        }

        a[minIndex] = a[i];
        a[i] = minValue;
    }
}
