#include "main.h"

/**
 * print_rev - function to print a string in reverse
 *
 * @s: string character
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int index = 0;

	while (s[index])

		index++;
	while (index--)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}
