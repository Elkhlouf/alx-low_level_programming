#include<stdio.h>
/**
 * main - a program that prints all single digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
