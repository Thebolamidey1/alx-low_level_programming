#include "main.h"

/**
 * main - print _putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	char *main = "_putchar";

	while (*main)
	{
		_putchar(*main);
		main++;
	}
	_putchar('\n');
	return (0);
}
