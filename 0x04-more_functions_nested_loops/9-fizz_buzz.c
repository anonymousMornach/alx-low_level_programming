#include <stdio.h>

/**
 * main - Prints 1 - 100
 * Return: always 0
 */
int main(void)
{
	int i;
	
	i = 0;
	printf("%d", i);
	for (i = 2; i <= 100; i++)
	{
		if ((i % 15) == 0)
		{
			printf(" FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf(" Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
