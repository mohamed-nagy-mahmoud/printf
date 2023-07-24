#include "main.h"
#include <stdio.h>

/**
 * _x - prints a binary number
 * @n:  arguements numbers
 * @s: the printed characters
 * @capital_letter: the uppercase equivalent
 * Return: printed charcaters
 */

int _x(unsigned int n, int s, int capital_letter)
{
	int heximal[100], a = 0, b;

	while (n != 0)
	{
		int rem = n % 16;

		if (rem < 10)
		{
			heximal[a] = 48 + rem;
		}
		else
		{
			if (capital_letter)
			{
				heximal[a] = 65 + (rem - 10);
			}
			else
			{
				heximal[a] = 97 + (rem - 10);
			}
		}
		a++;
		n /= 16;
	}
	if (a == 0)
	{
		putchar('0');
		s++;
	}
	else
	{
		for (b = a - 1; b >= 0; b--)
		{
			putchar(heximal[b]);
			s++;
		}
	}
	return (s);
}
