#include "main.h"

/**
 * print_rev - prints 0 string in reverse
 * @s: strin to be printed
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar((s[i]);

	_putchar('\n');
}
