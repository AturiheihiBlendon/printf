#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int _putchar(char c);
int (*choice(char s))(va_list);
void _prints(char *s);
void print_int(int n);
int _printf(const char *format, ...);

#endif
