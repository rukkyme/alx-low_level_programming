#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: memory area that will be copied to
 * @src: memory area that the function will copy from
 * @n: the number of bytes to be copied
 *
 * Return: pointer to the copied memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for  (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
