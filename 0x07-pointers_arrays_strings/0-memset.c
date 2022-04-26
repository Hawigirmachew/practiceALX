#include "main.h"
/**
* _memset - set a value to array using char
* @s: pinter pointers to array of char
* @b: takes char
* @n: takes unsigned int
* Return: return char
*/
char *_memset(char *s, char *b, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
