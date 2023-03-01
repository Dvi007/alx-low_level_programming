#include "main.h"
/**
 * puts_half - prints half of a string
 * str: array
 * Return: void
 */
void puts_half(char *str)
{
	unsigned int length_of_the_string  = 0, i = 0, n;

	while (str[i] != '\0')
	{
		length_of_the_string++;
		i++;
	}

	if (length_of_the_string % 2 == 0)
		n = length_of_the_string / 2;
	else
		n = (length_of_the_string + 1) / 2;

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
_putchar('\n');
}
