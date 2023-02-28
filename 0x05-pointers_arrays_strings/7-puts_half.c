#include "main.h"
/**
 * puts_half - prints half of a string
 * str: array
 * Return: void
 */
void puts_half(char *str)
{
	int i, length_of_the_string  = 0, n;

	length_of_the_string = strlen(str);
	n = (length_of_the_string) / 2;
	for (i = n; i < length_of_the_string; i++)
		_putchar(str[i]);
_putchar('\n');
}
