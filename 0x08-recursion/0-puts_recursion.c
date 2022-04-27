#include "main.h"
/**
* _puts_recursion - prints string to stdout
* @s: pointer points to array of char
* Return: void type
*/
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
s++;
_puts_recursion(s);
}
_putchar('\n');
return;
}
