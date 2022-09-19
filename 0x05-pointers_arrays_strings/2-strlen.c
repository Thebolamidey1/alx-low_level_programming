#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - the string length
 * @s: string length to print
 *
 * Return: always 0
 */
int _strlen(char *s)
{
	int len;

	len = strlen(s);

	printf("%d", len);

	return (0);
}
