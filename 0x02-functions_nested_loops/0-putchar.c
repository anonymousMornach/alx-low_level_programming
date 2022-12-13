#include "main.h"

/**
 * main - Prints _putchar  as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114, 10};
	int i,al;

	al = sizeof(str) / sizeof(int);
	
	for (i = 0 ;i < al ;i++)
	{
		_putchar(str[i]);
	}	
	return (0);
}
