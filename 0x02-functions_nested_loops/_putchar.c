#include <unistd.h>
/**
 * _putchar - writes character
 * @c: the character
 * Return: 1 sucess
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
