#include <stdio.h>
/**
 * main - entry block
 * Return: Always return  0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d", sum);
	return (0);
}
