#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer
 * Return: natural square root of the number or
 * If n does not have a natural square root, return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	
	return (sqrt(n));
}
