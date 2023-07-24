#include "main.h"

/**

*printf_string - prints a string with formatting
*@arguments: number of arguments
*@s: characters has to be  printed
Return: number of characters printed
*/

int printf_string(va_list arguments, int s)
{
	char *string = va_arg(arguments, char *);

	while (*string != '\0')
	{
		_putchar(*string);
		s++;
		string++;
	}
	return (s);
}
