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

      i = n - 1;

      while (i >= 0)
      {
	      if (i != n-1)
		      printf(", ");
	      printf("%d", a[i]);
	      i--;
      }
      printf("\n");


}

