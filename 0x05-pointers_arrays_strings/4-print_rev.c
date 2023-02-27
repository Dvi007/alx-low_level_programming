#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: pointer of char
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	for (i = strlen(s); i > 0; i--)
	{
		_putchar(s[i]);
	}
_putchar('\n');
}
