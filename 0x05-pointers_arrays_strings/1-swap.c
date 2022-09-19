#include "main.h"
#include <stdio.h>

/**
 * swap_int - program to swap values of integers
 *@a: first integer
 *@b: second integer
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)

{

	int temp;

	temp = *a;

	*a = *b;

	*b = temp;

}
