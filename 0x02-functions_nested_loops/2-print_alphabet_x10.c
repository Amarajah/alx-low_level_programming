#include <stdio.h>

/**
 *print_alphabet_x10 - prints alphabet multiplied by 10
 *
 *Description - prints alphabets multiplied by 1o
 *
 *Result: 0 (success)
 */

void print_alphabet_x10(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	putchar(letter * 10);

	putchar('\n');
}
