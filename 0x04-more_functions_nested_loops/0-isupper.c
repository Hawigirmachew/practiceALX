#include "main.h"
/**
 * _isupper - checks if char is uppercase or not
 * @c : takes integer
 * Return: 1 if c is char if not 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
