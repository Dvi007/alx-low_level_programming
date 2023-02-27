#include "main.h"
/**
 * _strlen - the length of string
 * @s: pointer of char
 * Return: integer
 */
int _strlen(char *s)
{
	int i = 0;
	int length = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
