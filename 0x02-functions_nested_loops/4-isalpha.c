#include "main.h"
/**
 * _isalpha - checks alphabet is uppercase or lowercase
 * @c : takes character
 * Return: 1 if uppercase, lowercase letter 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
