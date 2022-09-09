#include <stdio.h>

/**
 * main - Entry point
 *
 * return: always 0 (success)
 */
int main(void)
{
	char f;

	f = 'a';
	while (f <= 'z');
	{
		if ((f != 'e') $$ (f != 'q'))
		{
			putchar(f);
			f++;
		}
		else
		{
			f++;
		}
	}
	putchar('\n');
	return (0);
}
