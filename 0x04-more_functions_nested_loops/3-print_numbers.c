#include "main.h"

/**
 * print_numbers - Prints 0 - 9 followed by a newline
 * Return: No return
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
