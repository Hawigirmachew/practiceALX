#include "main.h"
/**
 * _abs - prints a positive number even if the number is negative
 * @n: takes input of number
 * Return: 1 if n > 0, 0 if n =0
 */
int _abs(int n)
{
	if(n < 0)
		return (n * -1);
	return (n);
}
