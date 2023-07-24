#include "main.h"

/**
 * formatter - formats the output based on provided specifiers and prints it
 * @arguments: number of arguments
 * @s: the string to be printed
 * @format: the format specifier
 * Return: number of characters printed
 */

int selector(const char *format, va_list arguments, int s)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			printed = printf_integer(arguments, s);
			break;
		case 'c':
			_putchar(va_arg(arguments, int));
			printed++;
			break;
		case 's':
			s = printf_string(arguments, s);
			break;
		case '%':
			_putchar('%');
			s++;
			break;
		case 'b':
			s = printf_binary(va_arg(arguments, unsigned int), s);
			break;
		case 'x':
		case 'X':
			s = _x(va_arg(arguments, unsigned int), s, (*format == 'X') ? 1 : 0);
			break;
		case 'o':
			s = printf_octal(va_arg(arguments, unsigned int), s);
			break;
		case 'u':
			s = printf_unsigned(va_arg(arguments, unsigned int), s);
			break;
		case 'r':
			s = printf_reverse(arguments, s);
			break;
		case 'p':
			s = printf_pointer(arguments, s);
			break;
		default:
			break;
	}
	return (s);
}

