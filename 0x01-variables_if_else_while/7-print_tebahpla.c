#include <stdio.h>

/**
 * main -prints lowercase alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
