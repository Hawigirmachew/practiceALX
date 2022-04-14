#include "main.h"
#include <stdio.h>
/**
 * main - entry block
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
                if (i != 100)
			_putchar(' ');
		else
			_putchar('\n');
		return (0);
	}
}
