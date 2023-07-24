#include "main.h"
#include <stdio.h>

/**
 * printf_char - function that prints binary numbers
 * @arguements: the arguements to use
 * @s: the s characters
 * Return: s charcaters success
 */

int printf_char(va_list arguements, int s)
{
	int character = va_arg(arguments, int);

	putchar(character);
	return (s + 1);
}
