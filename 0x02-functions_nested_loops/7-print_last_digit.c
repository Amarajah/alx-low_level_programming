#include <stdio.h>

/**
 *print_last_digit - prints the last digit of a number
 *
 *@n: The integer to be computed
 *
 *Return: Returns the value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	putchar(last_digit + '0');

	return (last_digit);
}
