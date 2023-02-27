#include "main.h"
/**
 * puts2 - prints every character of a string
 * @str: array
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i] != '\0')
		i++;
	len = i;
	i = 0;
	for (;i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
