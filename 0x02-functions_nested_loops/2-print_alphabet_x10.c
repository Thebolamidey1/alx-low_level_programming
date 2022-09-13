#include "main.h"
/**
 * void print_alphabet_x10(void) - Entry point
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char pa;
	int p;

	p = 0;

	while (p < 10)
	{
		pa = 'a';
		while (pa <= 'z')
		{
			_putchar(pa);
			pa++;
		}
		_putchar('\n');
		p++;
	}
}
			
