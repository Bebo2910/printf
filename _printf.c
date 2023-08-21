#include "main.h"

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
			switch (format[i])
			{
				case 'c':
					sum += print_char(ap);
					break;
				case 's':
					sum += print_string(ap);
					break;
				case '%':
					sum += print_percent(ap);
					break;
				default:
					_putchar(format[i]);
					sum++;
					break;
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
