#include <stdio.h>

/**
 *print_to_98 - prints numbers up till 98
 *
 *@n: positive integer
 *
 *Return: 0 (success)
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;

		}
	}
	else if (n > 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		n--;
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
