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
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
