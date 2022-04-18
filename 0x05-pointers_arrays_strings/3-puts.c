#include "main.h"
/**
 * _puts- prints a string to the stdout
 * @str: a pointer points to character
 * Returns: Always 0
 */
void _puts(char *str)
{
	int m;

	char *c;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar(c[m]);
	}
	_putchar('\n');
}
