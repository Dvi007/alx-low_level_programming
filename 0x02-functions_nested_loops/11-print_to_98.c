#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers
 * @n: integer
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
		printf("98\n");
	}
	if (n > 98)
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
		printf("98\n");
	}
	if (n == 98)
		printf("98\n");

}
