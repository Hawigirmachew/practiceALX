#include "main.h"
/**
 * print_sign - checks sign of number
 * @n: takes an integer
 * Return: 1 if n is positive , 0 if n is zero and -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
