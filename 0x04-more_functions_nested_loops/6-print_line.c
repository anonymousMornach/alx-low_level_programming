#include "main.h"

/**
 * print_line - Print a straight line
 *
 * @n: Character input
 *
 * Return: return void
 */
void print_line(int n);
{
	char i;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(45);
		}
		_putchar(10);
	}
}