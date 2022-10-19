#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative -prints out random numbers and says wether it is negative or positive
 * @i: input
 * Return: Always 0 (Success)
 */
int positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
	return (0);
}
