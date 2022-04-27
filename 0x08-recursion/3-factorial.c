#include "main.h"
/**
* factorial - prints the factorial of number
* @n: takes an integer
* Return: return the factorial of number
*/
int factorial(int n)
{
if (n <= 0)
return (1);
if (n == 1)
return (1);
return (n * factorial(n - 1);
}

