#include "main.h"

/**
  * print_char - char print
  * @s: s
  * Return: jkfks
  *
  *
  */
int print_char(int s)
{
	int sum = 0;

	sum += _putchar(s);
	return (sum);
}

/**
  * print_int - int
  * @num: int
  * Return: return 1
  *
  *
  *
  */
int print_int(long int num)
{
	int divisor = 1;
	int sum = 0;

	if (num < 0)
	{
		sum += _putchar('-');
		num = -num;
	}

	while (num / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		int digit = num / divisor;

		sum += _putchar(digit + '0');
		num %= divisor;
		divisor /= 10;
	}
	return (sum);
}

/**
  * print_string - print string
  * @s: string
  * Return: sum
  *
  *
  */
int print_string(char *s)
{
	int i, sum = 0;

	for (i = 0; s[i] != '\0'; i++, sum++)
	{
		_putchar(s[i]);
	}

	return (sum);
}

/**
  * print_percent - print percent
  * Return: vokd
  *
  *
  *
  */
int print_percent(void)
{
	return (_putchar('%'));
}

/**
  * print_binary - binary
  * @num: num
  * Return: sum
  *
  *
  *
  */

int print_brinary(unsigned int num)
{
	unsigned int number = num;
	int i = 0, index, sum = 0;
	int *a;

	while (number != 0)
	{
		a[i] = number % 2;
		number = number / 2;
		i++;
	}

	for (index = i - 1; index >= 0; index--)
	{
		sum += _putchar(a[index] + '0');
	}

	return (sum);
}
