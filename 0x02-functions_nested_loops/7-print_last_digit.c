#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @num: number input
 * Return: value of last digit
 */
int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	
	if (num < 0)
	{
		num = (-1 * num);
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
