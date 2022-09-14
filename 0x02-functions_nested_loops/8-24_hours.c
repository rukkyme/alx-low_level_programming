#include "main.h"

/**
 * jackbauer - function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 * Return: 0
 */
void jack_bauer(void)
{
	int H = 0;
	int M = 0;

	for (H = 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
		}
	}
}



