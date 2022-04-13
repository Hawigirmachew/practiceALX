#include "main.h"
/**
 * print_to_98 - prints numbers up to 98
 * @n: takes an integer
 * Return: number
 */
void print_to_98(int n)
{
	if (n >=98)
	{
		for (n = n; n < 98; n++)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(n + '0');
		}
		_putchar(98 + '\n');
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(n + '\n');
		}
		_putchar(98 + '\n');
	}
}
