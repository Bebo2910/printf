#include <unistd.h>

/**
 * putchar - print char  c
 * @c: character to print
 * Return: on success 1
 * on error, -1 is returned, otherwise NULL
 */

int _putchat(char c)
i{
	return (write(1, &c, 1));

}
