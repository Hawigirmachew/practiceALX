#include "main.h"
#include <stdio.h>
/**
 * swap_int - takes two pointers and swap their value
 * @a: A pointer points to integer
 * @b: Apointer points to integer
 * Return: Always zero
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
