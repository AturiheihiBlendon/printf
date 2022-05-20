#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int _putchar(char c);
int (*choice(char s))(va_list);
void print_int(va_list args);
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args)

#endif
