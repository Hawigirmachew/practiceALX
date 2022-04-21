#include "main.h"
/**
 * reverse_array: gives the reverse of an array
 * @a: pointer points to an array
 * @n: takes an integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
        int *start = a;

	for (i = n-1; i >= 0; i--)
		a[i] = start[i];
	_putchar(a);
}

