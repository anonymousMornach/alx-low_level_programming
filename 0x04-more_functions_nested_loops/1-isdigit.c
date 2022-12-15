#include "main.h"

/**
 * _isdigit - Checks if character is a digit or not
 *
 * @c: Character input
 *
 * Return: 1 if c is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
