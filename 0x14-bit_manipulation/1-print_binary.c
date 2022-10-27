#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: integer
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;

	if (n == 0)
		_putchar('0');
	else
	{
		i = n & 1;
		n = n >> 1;
		if (!n == 0)
			print_binary(n);
		_putchar(i + '0')
	}
}
