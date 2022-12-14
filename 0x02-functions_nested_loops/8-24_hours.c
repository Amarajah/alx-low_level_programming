#include <stdio.h>

/**
 *jack_bauer -prints every minute of the day
 *h = hour, m = minutes
 * / 10 allows digits to rotate
 *for loop breaks before 24:00
 *Return: 24-hour clock line by line
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0 ; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			putchar((h / 10) + '0');
			putchar((h % 10) + '0');
			putchar(':');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar('\n');
		}
	}
}
