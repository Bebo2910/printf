#ifndef _PRINTF_H
#define _PRINTF_H

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>

typedef struct specifier
{
	char *spec;
	int (*f)(va_list);
} specifier_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);

#endif
