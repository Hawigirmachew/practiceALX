#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of diagonals of matrix
* @a: the matrix of the integer
* @s: the size of the matrix
* Return: void
*/
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i];
a += size;
}
a -= size;

for (i = 0; i < size; i++)
{
sum2 += a[i];
a -= size;
}
printf("%d, %d\n", sum1, sum2);
}
