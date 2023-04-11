#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

# This defines linear_search function and it takes array, size and int as parameters
int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }
    
    for (size_t i = 0; i < size; i++) {
        printf("Comparing value in array: %d\n", array[i]);
        if (array[i] == value) {
            return i;
        }
    }
    
    return -1; // Value not found
}
