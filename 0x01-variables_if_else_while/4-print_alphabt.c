#include <stdio.h>
/**
 * main - print the alohabet without q and e
 *
 * Return: void
*/
int main(void)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
putchar('\n');
return (0);

}
