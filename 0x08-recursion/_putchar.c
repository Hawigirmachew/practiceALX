#include "'main.h"
/**
* _putchar - prints char to stdout
* @c: takes char
* Return: integer
*/
int _putchar(char c)
{
return(write(1, &c, 1));
}
