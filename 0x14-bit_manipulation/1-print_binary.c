#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: integer
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;

	for (i = 1 << 31; i > 0; i >>= 1)
		printf("%u", !!(n & 1));
}
