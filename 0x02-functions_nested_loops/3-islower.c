#include "main.h"
#include <ctype.h>

/**
 * _islower- Checks for lowercase letters
 *
 * Return: 1 if c is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
