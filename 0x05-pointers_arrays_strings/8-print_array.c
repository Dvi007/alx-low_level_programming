#include "main.h"
/**
 * print_array - print element of array
 * @a: array
 * @n: element of array
 * Return void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
