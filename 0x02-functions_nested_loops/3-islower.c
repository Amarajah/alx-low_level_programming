#include <stdio.h>

/**
 *main - entry point
 *c -specific integer value
 *Description - function to check lowercase c
 *_islower - checks for lowercase c
 *Result: 1 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);
}
