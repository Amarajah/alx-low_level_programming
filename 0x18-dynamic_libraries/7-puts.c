#include "main.h"
/**
 * _puts - function which writes a string to stdout up plus newline
 * @s: character
 * Return: void
 */

void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
