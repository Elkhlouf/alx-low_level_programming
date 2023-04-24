#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char l = 'z';

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
