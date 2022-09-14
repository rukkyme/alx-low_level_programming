#include "main.h"

/**
 * print_sign - function checks sign on numbers
 * @n:This is the input number
 * Description: this will print the sig of a number
 * Return:1 if number is +tive,0 if number is zero, -1 if number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}

	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}

	else
	{
	_putchar('0');
	return (0);
	}

}



