#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: pointer to an array
 * @n: number of the array of element
 * Description: Numbers must be separated by comma and space.
 * Numbers should be displayed in the way they are stored in array.
 * You can only use _putchar to print.
 */

void print_array(int *a, int n)
{
	int i;
	
	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}

