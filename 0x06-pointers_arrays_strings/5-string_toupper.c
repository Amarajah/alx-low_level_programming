#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function that changes lowercase
 * numbers to uppercase
 *
 * Return: void
 */

char *string_toupper(char *)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] > = 'a' && str[i] < = 'z')
		{
			str[i] - = 32;
		}
			i++;
	}

	return (str);
}
