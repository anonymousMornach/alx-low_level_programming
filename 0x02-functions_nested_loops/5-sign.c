#include "main.h"
/**
 * print_sign - Program returns the sign of a number except zero.
 * @n - Integer containing number.
 *
 * return + if number is greater than zero and  - if number is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
