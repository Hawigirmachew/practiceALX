#include <stdio.h>
/**
 *main - entry of the programm
 *
 * Return: Always return 0
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum = 0;
        int count;

        for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count <= 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

