#include <stdio.h>

/**
 *times_table - program to print multiplication values for a certain number
 *r = row, c = column, d = digits of current result
 *
 *add extra space past single digit
 *Return: 9 times table line by line
 */

void times_table(void)
{
	int r, c, d;

	for (r = 0; r <= 9; r++)
	{
		putchar('0');
		putchar(',');
		putchar(' ');

		for (c = 0; c <= 9; c++)
		{
			d = (r * c);

			if ((d / 10) > 0)
			{
				putchar((d / 10) + '0');
			}
			else
			{
				putchar(' ');
			}

			putchar((d % 10) + '0');

			if (c < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}

		putchar('\n');
	}
}
