#include <stdlib.h>
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
	if (n > 0)
		printf("this number is positive");
		printf("%d  is positive", n);
	else
		printf("this number is negative");
		printf(" %d is negative", n);
	return (0);
}
