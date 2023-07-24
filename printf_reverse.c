#include "main.h"
/**
 * printf_reverse - prints characters in back order
 * @argument: number of arguments
 * @s: characters that printed
 * Return: number of characters has printed
 */

int printf_reverse(va_list argument, int s)
{
	char *str = va_arg(argument, char *);
	int len = 0, a;

	while (str[len])
	{
		len++;
	}

	for (a = len - 1; a >= 0; a--)
	{
		_putchar(str[a]);
		s++;
	}

	return (s);
}
