#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 Return: Always 0 (success/correct)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 21

if (n==0)
{
printf("%i is zero\n", n);
}

else if (n<0)
{printf("%i is negative\n", n);
}

else
{printf("%i is poditive\n", n);
}
return (0);

}
