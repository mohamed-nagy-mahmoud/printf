#include "main.h"

/**
*printf_unsigned - an unsigned integer that has be printed
*@n: the unsigned integer to be printed
*@s: the number of printed characters
*Return: the number of printed characters
*/

int printf_unsigned(unsigned int n, int s)
{
	int Glyphs = 0;
	unsigned int temp = n;

	do {
		Glyphs++;
		temp /= 10;
	} while (temp != 0);

	if (n == 0)
	{
		_putchar('0');
		s++;
	}
	else
	{
		char unsigned_str[11];
		int a = 0;

		while (n != 0)
		{
			unsigned_str[a] = (n % 10) + '0';
			n /= 10;
			a++;
		}
		for (a = Glyphs - 1; a >= 0; a--)
		{
			_putchar(unsigned_str[a]);
			s++;
		}
	}
	return (s);
}

