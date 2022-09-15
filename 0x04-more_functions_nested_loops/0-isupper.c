#include "main"

/**
 * _isupper - checks for uppercase letter
 * @c: character to check for
 *
 * Return: 1 if uppercase else 0 (false)
 */
int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
	{
		return (1);
	}
	return (0);
}
