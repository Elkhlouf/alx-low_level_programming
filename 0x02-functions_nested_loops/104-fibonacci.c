#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 1, b = 2, c, count = 0;

	printf("%d, %d, ", a, b);
	while (count < 96)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
		count++;
	}
	printf("%d\n", a + b);
	return (0);
}
