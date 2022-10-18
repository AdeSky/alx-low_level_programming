#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 *@n: number input
 * Return: 1 (+) if n > zero, 0 (0) n = 0, -1 (-) n < zero
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
	return (1);
	else if (n == 0)
		_putchar('0');
	return (0);
	else if (n < 0)
		_putchar('-');
	return (-1);
}
