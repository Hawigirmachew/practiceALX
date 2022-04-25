#include "main.h"
/**
* _memset - to change array element
* @s: pointer points to array of char
* @b: takes char
* @size: takes unsigned int
* Return: char value
*/
char *_memset(char *s, char b, unsigned int size)
{

int n = size;

if (size > 0){
int i;

for (i = 0; i < size; i++)
s[i] = b;
}
return (s);
}
