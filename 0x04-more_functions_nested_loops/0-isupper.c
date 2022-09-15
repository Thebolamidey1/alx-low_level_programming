#include "main"

/**
 * _isupper - checks for uppercase letter
 * @c: character to check for
 *
 * Return: 1 if uppercase else 0 (false)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
