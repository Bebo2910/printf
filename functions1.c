#include"main.h"

/**
  * print_char - functions
  * @ap: ap
  * Return: 1 or 0
  *
  *
  */

int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
/**
  * print_percent - func
  * @ap: ap
  * Return: 1 on
  *
  */

int print_percent(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
/**
  * print_string - funct
  * @ap: ap
  * Return: return
  *
  */

int print_string(va_list ap)
{
	char *s = va_arg(ap, char *);
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	return (i);
}
