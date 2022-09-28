#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 *
 * @s: character string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int index = 0;

	if (s[index])
	{
		index++;
	}
	else
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}
