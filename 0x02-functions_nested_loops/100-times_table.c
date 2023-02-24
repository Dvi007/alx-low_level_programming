#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print table n times
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int i = 0, k, j;

	for (; i <= n; i++)
	{
		if (n > 15 || n < 0)
			continue;
		_putchar(0 + '0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= n; j++)
		{
			k = i * j;
			if (k < 9)
			{
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			if (k > 99)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((k / 100) + '0');
				_putchar((k % 10 % 10) + '0');
				_putchar((k % 10) + '0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
