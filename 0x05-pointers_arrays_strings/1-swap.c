#include <stdio.h>
/**
 * swap_int - swap values of two integers
 * @a: Character input
 * @b: Character input
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = a;
	a = b;
	b = c;
}
