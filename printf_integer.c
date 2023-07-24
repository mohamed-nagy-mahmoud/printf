#include "main.h"
#include <stdio.h>

/**
 * printf_integer - prints intiger number
 * @arguements: number of arguements
 * @s: the s characters
 * Return: s charcaters
 */

int printf_integer(va_list arguments, int s)
{
	int n = va_arg(arguments, int s);
	int Glyphs = 0;
	int temp = n;
	int Glyph;

	if (n < 0)
	{
		s += putchar('-');
		n = -n;

		temp = n;
	}

	do {
		Glyphs++;
		temp /= 10;
	} while (temp != 0);

	while (Glyphs > 0)
	{
		int pow10 = 1;
		int a;

		for (a = 1; a < Glyphs; a++)
		{
			pow10 *= 10;
		}
		Glyph = n / pow10;
		s += putchar(Glyph + '0');
		n -= Glyph * pow10;
		Glyphs--;
	}
	return (s);
}
