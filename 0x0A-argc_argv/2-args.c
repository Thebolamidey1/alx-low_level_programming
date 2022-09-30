#include <stdio.h>

/**
 * main - function that prints all arguments
 * @argc: argument count
 * @argv: argment vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}