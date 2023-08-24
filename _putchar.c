#include <unistd.h>

/**
 * _putchar - print fmt char
 * @c: is the char to be printed
 * Return: 1 on success.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
