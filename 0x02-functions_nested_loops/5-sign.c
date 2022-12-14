#include "main.h"
/**
 * print_sign - Program returns the sign of a number except zero
 * 
 * @c - Integer containing number
 *
 * Return + if number is greater than zero and  - if number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return(0);
	else
		return(-1);
}
