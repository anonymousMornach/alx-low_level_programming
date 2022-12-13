#include "main.h"

/*Program prints _putchar then returns o*/

int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114, 10};
	int i, al;

	al = sizeof(str) / sizeof(int);
	
	for (i = 0; i < al; i++)
	{
		_putchar(str[i]);
	}	
	return (0);
}
