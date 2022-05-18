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
	int i = 0, x;
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
			else if (format[i + 1] == 'c') /* fourth check */
			{
				_putchar(va_arg(args, int));
				i++;
			}
			else if (format[i + 1] == 's') /* fifth check */
			{
				str = va_arg(args, char *);
				_prints(str);
				i++;
			}
			else if (format[i + 1] == 'i' || format[i + 1] == 'd') /* sixth check */
			{
				x = va_arg(args, int);
				print_int(x);
				i++;
			}
		}
		i++;
	}
	va_end(args);
	return (0);
}

