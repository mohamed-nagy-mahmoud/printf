#include "main.h"
#include <stdio.h>

/**
 * printf_binary - function prints binary numbers
 * @n: number arguements
 * @s: output characters 
 * Return: printed charcaters means success
 */

int printf_binary(unsigned int n, int s)
{
	int binary[32] = {0};
	int a = 0;

	if (n == 0)
	{
		putchar('0');
		s++;
		return (s);
	}

	while (n > 0)
	{
		binary[a] = n % 2;
		n /= 2;
		a++;
	}

	while (a > 0)
	{
		a--;
		putchar('0' + binary[a]);
		s++;
	}

	return (s);
}
