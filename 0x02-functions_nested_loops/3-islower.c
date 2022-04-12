#include "main.h"
/**
 * _islower - checks if character is lower case or not
 * @c: takes input character value
 * Return: 1 if lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
