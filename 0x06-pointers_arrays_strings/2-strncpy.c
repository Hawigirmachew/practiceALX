#include "main.h"
/**
 * _strncpy - copy one string to the other string
 * @dest: pointer points to array of char
 * @src: pointer points to array of char
 * @n: takes integer
 * Return: the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
