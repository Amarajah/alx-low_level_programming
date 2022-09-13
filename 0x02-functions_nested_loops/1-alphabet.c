#include <stdio.h>

/**
 *main - prints alphabets in lowercase
 *
 *Description - prints alphabets in lowercase
 *
 *Return: 0 (successful)
 */

void print_alphabet(void);

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);

	putchar('\n');

	return (0);
}
