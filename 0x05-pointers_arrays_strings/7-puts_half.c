#include "main.h"
/**
 * puts_half - prints the  half of given
 * @str: pointer points to char
 * Return: void type
 */
void puts_half(char *str)
{
	int n, last;

	n = 0;

	while (str[n] != '\n')
	{
		n++;
	}

	last = n + 1 / 2;

	for (n = last; str[n] != '\n'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}


