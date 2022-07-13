#include "main.h"

/**
 * _puts -write a function that prints a string followed by a new line
 *
 * @str: This is the input string
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}



