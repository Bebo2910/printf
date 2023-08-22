#ifndef _PRINTF_H
#define _PRINTF_H

#include<limits.h>
#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#include<unistd.h>

int print_int(int num);
int _putchar(char c);
int _printf(const char *format, ...);
int print_percent(void);
int print_string(char *s);
int print_char(int s);

#endif
