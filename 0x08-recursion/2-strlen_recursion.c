#include "main.h"
/**
* _strlen_recursion - prints the lenght of the string
* @s: pointer points to array of char
* Return: the lenth of integer
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return 0;
s++;
return (1 + _strlen_recursion(s));
}
