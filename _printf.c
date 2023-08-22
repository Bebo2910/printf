#include "main.h"

/**
  * _printf - function
  * @format: format
  * Return: sum
  *
  *
  *
  */
int _printf(const char *format, ...)
{
	int sum = 0, j = 0;
	va_list ap;

	va_start(ap, format);

	while (format && format[j])
	{
		if (format[j] != '%')
		{
			sum += _putchar(format[j]);
			j++;
			continue;
		}
		j++;
		switch (format[j])
		{
			case 'i':
				sum += print_int(va_arg(ap, int));
				j++;
				break;
			case 'd':
				sum += print_int(va_arg(ap, int));
				j++;
				break;
			case 'c':
				sum += print_char(va_arg(ap, int));
				j++;
				break;
			case '%':
				sum += print_percent();
				j++;
				break;
			case 's':
				sum += print_string(va_arg(ap, char *)) - 1;
				j++;
				break;
		}
	}
	va_end(ap);
	return (sum);
}
