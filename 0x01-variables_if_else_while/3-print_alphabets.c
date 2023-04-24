#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char l = 'a';

	char L = 'A';

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (L = 'A'; L <= 'Z'; L++)
		putchar(L);
	putchar('\n');
	return (0);
}
