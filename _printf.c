#include "main.h"
#include <stdlib.h>

/**
  * _printf - printf function
  * @format: format
  * Return: sum of the chars
  *
  *
  */

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, j, sum = 0;
	specifier_t find[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	va_start(ap, format);
	if (format)
	{
		return (-1);
	}

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			sum++;
			for (j = 0; find[j].specifier; j++)
			{
				if (format[i] == find[j].specifier[0])
				{
					sum += find[j].f(ap);
				}
			}
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
		i++;
	}
	va_end(ap);
	return (sum);
}
