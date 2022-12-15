#include "main.h"

/**
 * print_triangle - Prints triangle
 * @size: Integer for triangle size
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < (size - i); j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < (size - j); k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
