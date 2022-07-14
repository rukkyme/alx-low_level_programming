#include "main.h"
/**
 * _strncpy -To copy a string
 * @dest: This is a pointer to a character that will be changed
 * @src: This is a pointer to a xter that will be changed
 * @n: value
 * Return:dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}





