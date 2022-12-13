#include "main.h"
/**
 * _islower - Program prints alphabet in lowercase
 *
 * Always return 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
