#include "search_algos.h"
/**
 * binary_search - binary search
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 *
 */
int binary_search(int *array, size_t size, int value)
{
    size_t low, high, mid, j;

    low = 0;
    high = size - 1;

   
    while (low <= high)
    {
        printf("Searching in array: %d", array[low]);
            for (j = low + 1; j < high + 1; j++)
            {
                printf(", %d", array[j]);
            }
            printf("\n");
        mid = low + (high - low) / 2;
        if (array[mid] < value)
        {
            low = mid + 1;

        }
        else if (array[mid] == value)
        {
            return (mid);
        }
        else
        {
            high = mid - 1;
        }
    }
    return (-1);
}