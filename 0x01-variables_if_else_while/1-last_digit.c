#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int z = n % 10;
	if (z > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, z);
	}
	else if (z == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, z);
	}
	else if(z < 6 && z > 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not zero\n", n, z);
	}

	return (0);
}
