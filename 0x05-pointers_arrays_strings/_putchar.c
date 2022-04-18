#include <unistd.h>
/**
 * _putchar - prints a character to the terminal
 * @n: takes character value
 * Returns: 1 if it success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
