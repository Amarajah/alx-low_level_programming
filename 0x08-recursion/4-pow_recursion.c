#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that return value of x raised to power of y
 * @x: integer
 * @y: integer
 * Return: value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)

		return (-1);
	else if (y == 0)

		return (1);
	else
		return (y * _pow_recursion(x, y - 1));
}
