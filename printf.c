#include "main.h"
/**
  * _printf - function that prints to std
  * @format: character string
  * Return: the number of characters printed
  * excluding the null byte used to end output to strings
  */

int _printf(const char *format, ...)
{
	char *str;
	int j = 0, i = 0;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%') /* first check */
		{
			_putchar(format[i]);
		}
		else if (format[i] == '%') /* second check */
		{
			if (format[i + 1] == '%') /* third check */
			{
				_putchar('%');
				i++;
			}
