#include <stdio.h>

/**
 *print_sign - prints sign of a number
 *
 *@n: Number to be taken into consideration
 *
 *Return: 0 if n is zero, 1 if n is positive , -1 if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		result(1);
		putchar('+');
	}
	else if (n == 0)
	{
		result(0);
		putchar('0');
	}
	else
	{
		result(-1);
		putchar('-');
	}
}
