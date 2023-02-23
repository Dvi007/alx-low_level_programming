#include "main.h"
/**
 * print_last_digit - the last digit of number
 * @c: integer
 * Return: 0(sucess)
*/
int print_last_digit(int c)
{
	int last;

	last = (c % 10);
	if (last < 0)
		last = (-1 * last);
	_putchar(last + '0');
	return (last);
}
