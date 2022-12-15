#include "main.h"

/**
 * _isupper : Checks if character is uppercase
 *
 * @c: Character input
 *
 * Return (1) is @c is uppercase and (0) if otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
