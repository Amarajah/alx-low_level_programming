#include "main.h"

/**
 * print_numbers - prints all numbers from 0 - 9
 *
 *
 *
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c >= '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}