#include "main.h"

/**
 * _strlen - returns the len of the string
 * @s: string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
