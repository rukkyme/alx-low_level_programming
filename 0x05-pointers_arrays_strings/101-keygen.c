#include <stdlib.h>
#include <time.h>
/**
 * main -it generates random valid passwords
 * Return: 0 (on success)
 *
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}




