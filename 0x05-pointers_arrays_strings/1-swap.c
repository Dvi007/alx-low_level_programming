#include "main.h"
/**
 * swap_int - change place
 * @a: first pointer of integer
 * @b: second pointer of integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
