#include "main.h"
/**
 * reverse_array: gives the reverse of an array
 * @a: pointer points to an array
 * @n: takes an integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
        int *start, *end, c;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		c = a[start];
		a[start] = a[end];
		a[end] = c;
		start++;
		end--;
	}
	_putchar(a);

}

