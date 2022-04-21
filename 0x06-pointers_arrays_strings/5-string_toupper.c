#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes letter to uppercase
 * @s: pointer points to char
 * Return : array of char
 */
char *string_toupper(char *s)
{
	while (*s != '\0')
	{
		if (*s >= 65 && *s <= 90)
		{
			*s = *s + 32;
		}
		s++;
	}
	printf("%c", *s);
}
