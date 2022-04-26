#include "main.h"
/**
* _strpbrk - search a string for any set of bytes
* @s: the string to be searched
* @accept: the set of bytes to be searched for
* Return: pointer printed
*/
char *_strpbrk(char *s, char *accept)
{
int i;

while(*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return ('\0');
}
