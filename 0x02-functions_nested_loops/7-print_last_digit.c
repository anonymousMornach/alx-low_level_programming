#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int l;
	
	l = n % 10;
	if (n < 0)
	{
		_putchar(-l + 48);
		return (0);
	}
	else
	{
		_putchar(l + 48);
		return (0);
	}
}
