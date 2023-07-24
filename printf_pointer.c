#include "main.h"

#define MAX_HEXIMAL_DIGIT 16

/**
 * print_binary_number - Prints a binary number.
 *
 * This function takes a binary number as input and prints it.
 *
 * @binary_number: The binary number to be printed.
 *
 * Return: The number of characters printed.
 */


int printf_pointer(va_list arguments, int s)
{
	void *ptr = va_arg(arguments, void*);
	unsigned long n = (unsigned long) ptr;
	int Glyph = 0;
	int i;
	unsigned long temp = n;
	char heximal_digits[MAX_HEXIMAL_DIGIT] = "0123456789abcdef";
	char heximal[MAX_HEXIMAL_DIGIT];

	while (temp != 0)
	{
		Glyph++;
		temp /= 16;
	}

	s += _putchar('0');
	s += _putchar('x');

	if (n == 0)
	{
		s += _putchar('0');
	}
	else
	{
		for (i = Glyph - 1; i >= 0; i--)
		{
			int Glyph = n % 16;

			heximal[i] = heximal_digits[Glyph];
			n /= 16;
		}
		for (i = 0; i < Glyph; i++)
		{
			s += _putchar(heximal[i]);
		}
	}
	return (s);
}

