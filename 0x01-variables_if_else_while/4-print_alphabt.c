#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase
 * except the letters e and q
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char l = 'a';

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == 'e' || l == 'q')
		{
			continue;
		}
		putchar(l);
	}
	putchar('\n');
	return (0);
}

