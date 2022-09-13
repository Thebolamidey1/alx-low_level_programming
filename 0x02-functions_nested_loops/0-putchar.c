#include "main.h"

/**
 * main - print _putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	char *weput = "_putchar";

	while (*weput)
	{
		_putchar(*weput);
		weput++;
	}
	_putchar("\n");
	return (0);
}
