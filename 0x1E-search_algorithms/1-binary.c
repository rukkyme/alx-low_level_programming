#include "search_algos.h"

/**
  * binary_search - Searches for target value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array
  * @size: number of elements in the array.
  * @value: The value to search for.
  *
  * Return: -1, If value is not present or the array is NULL
  *         Otherwise, the index where the value is located.
  *
  * Description: Print [sub]array being searched after each change.
  */

int binary_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }

    int left = 0; 
    int right = size - 1; 

    while (left <= right) 
        int mid = (left + right) / 2; 
        printf("Searching in subarray: "); 
        for (int i = left; i <= right; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");

        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) { 
            left = mid + 1;
        } else { 
            right = mid - 1;
        }
    }

    return -1; 
}

