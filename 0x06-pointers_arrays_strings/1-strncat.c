#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: This is a xter that will change
 * @src: A pointer to a xter that will be changed
 * @n: value
 * Return: dest
 * */

char *strncat(char *dest, char *src, int n)

{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';

return (dest);
}

