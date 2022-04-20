#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: pointer points to array of char
 * @s2: pointer points to array of char
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	char *s1_one, *s2_two;
        
	*s1_one = s1;
	*s2_two = s2;

	while (*s1_one != '\0' && *s2_two != '\0' && *s1_one == *s2_two)
	{
		s1_one++;
		s2_two++;
	}

	return (*s1_one - *s2_two);
}

