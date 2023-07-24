#include "main.h"
#include <stdio.h>

/**
 * _printf - implementation of the inbuilt printf
 * @format: the format specifier
 * Return: the formated string
 */

int _printf(const char *format, ...)
{
	int arguments = 0;

	va_list arguments;

	va_start(arguments, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			s = selector(format, arguments, s);
			format++;
		}
		else
		{
			putchar(*format);
			s++;
			format++;
		}
	}
	va_end(arguments);
	return (s);
}
