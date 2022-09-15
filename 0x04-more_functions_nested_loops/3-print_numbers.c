#include "main.h"

/**
 * print_numbers - print 0 to 9
 *
 */

void print_numbers(void)
{
	int prt = 0;

	while (prt < 10)
	{
		_putchar(0 + prt);
		prt++;
	}
	_putchar('\n');
}
