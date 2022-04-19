#include "main.h"
/**
 * puts2 - prints half of the entered number
 * @str: a pointer points to character
 * Returns: Always 0
 */
void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\n'; n++)
	{
		if (n % 2 == 0)
			_putchar(str[n]);
	}
	_putchar('\n');
}
