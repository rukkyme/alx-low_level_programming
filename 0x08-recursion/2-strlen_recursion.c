#include "main.h"

/**
 * _strlen_recursion - this function calculates length of a string
 * @s: the string to be used
 *
 * Return: length of the string calculated
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}

