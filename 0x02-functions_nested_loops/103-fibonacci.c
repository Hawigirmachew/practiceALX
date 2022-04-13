#include <stdio.h>
/**
 * main - entry block
 * Return: Always 0
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	int total_sum;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;
		if ((fibsum % 2) == 0)
			total_sum += fibsum;
		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%d\n", total_sum);
	return (0);
}
