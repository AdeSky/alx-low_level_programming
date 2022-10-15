#include <stdio.h>

/**
 * main -Prints alphabets in lowercase, except for q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
	if  (n != 'q' && n != 'e')
		putchar(n);
	}
	putchar('\n');
	return (0);
}
