#include "main.h"

/**
 * print_most_numbers - Prints 0 - 9 except 2 and 4
 * Return: no return
 */
void print_most_numbers(void)
{
	int i;
	
	i = 48;
	while ((i < 58) && (i != 50 || i != 52))
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
