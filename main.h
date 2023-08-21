#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);

#endif
