#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - the last digit
 *
 * Return: 0(sucess)
 */
int main(void)
{
	int n;
	int reste;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
  /* your code goes there */
	reste = n % 10;
	if (reste > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, reste);
	}
	if (reste == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, reste);
	}
	if (reste <  6 && reste != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, reste);
	}
return (0);
}
