#include "main.h"
/**
 * print_line - prints a straight line
 * @n: integer
 * Return: 0 sucess
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n == 0 || n < 0)
			_putchar('\n');
		_putchar('-');
	}
	_putchar('\n');
}
