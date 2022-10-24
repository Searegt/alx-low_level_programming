#include "main.h"

/**
 * _strlen - functions to get the length of the string
 * @s: string pointer to passed to this funtion
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int len;

	for (*s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
