#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[15] = "0123456789abcdef";
	int i;

	for (i = 0; i < 15; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
