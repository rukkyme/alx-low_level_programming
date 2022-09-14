#include <stdio.h>

/**
 * print_to_98 - this prints all natural numbers from input to 98
 * in order separated by a comma and then a space
 * @n: the number start counting at n
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d", n++);
		printf("%d\n", n);
	}
}

