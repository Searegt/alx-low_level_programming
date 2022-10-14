#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: prints if a number is positive oe negative
 * Return: 0
 */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is a positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is a zero\n", n);
	}
	return (0);
}
