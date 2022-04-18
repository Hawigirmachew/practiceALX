#include "main.h"
#include <stdio.h>
/**
 * _strlen - calculates and returns length of char
 * @s: A pointer points to character
 * Return: the length of the char
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
