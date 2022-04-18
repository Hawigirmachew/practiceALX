#include "main.h"
/**
 * print_rev - prints the reverse of the string
 * @s: a pointer points to character
 *
 * Returns: Always 0
 */
void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\n')
	{
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}


