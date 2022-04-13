#include <stdio.h>
/**
 * main - entry block
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum = 0;
	int count;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu");

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}	
