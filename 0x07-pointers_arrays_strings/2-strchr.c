#include "main.h"
/**
* _strchr - finds the char in array
* @s: pointer points to array of char
* @c: takes char
* Return: char
*/
char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != '\0' && s[i] != c)
{
i++;
if (s[i] == c)
return (&s[i]);
else
return (NULL);
}
}

