#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an array
 * @a: a pointer points to the whole array
 * @n: the size of the array
 * REturn: void type
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
