#include "main.h"
#include <stdlib.h>

/**
 * _calloc - this uses malloc to allocate memory to an array
 * @nmemb: elements in the array
 * @size: the size of the bytes in the elements
 *
 * Return: void pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}

