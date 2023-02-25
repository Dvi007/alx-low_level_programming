#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - negative or positive
 *
 * Return: 0 (sucess)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code goes ther */
	if (n == 0)
		printf("0 is zero\n");
	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
return (0);
}
