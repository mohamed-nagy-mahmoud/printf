#include "main.h"
#include <stdio.h>

/**
 * printf_octal - functions that prints binary numbers
 * @n: number of arguements
 * @s: the s characters
 * Return: s charcaters means success
 */

int printf_octal(unsigned int n, int s)
{
	int oct[100], a = 0, b;

	while (n != 0)
	{
		int rem = n % 8;

		oct[a] = 48 + rem;
		a++;
		n /= 8;
	}

	if (i == 0)
	{
		putchar('0');
		s++;
	}
	else
	{
		for (b = a - 1; b >= 0; b--)
		{
			putchar(oct[b]);
			b++;
		}
	}
	return (s);
}
