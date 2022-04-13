#include <stdio.h>
/**
 * main - entry block
 * Return : always 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("Sum of multiples of 3 and 5 is %d", sum);
	return (0);
}
