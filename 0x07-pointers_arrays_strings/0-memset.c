#include "main.h"

/**
 * memset - function that fills a memory block with a constant byte
 * @s: pointer to the memory block
 * @b: the value to be set
 * @n: number of bytes to be set
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}



