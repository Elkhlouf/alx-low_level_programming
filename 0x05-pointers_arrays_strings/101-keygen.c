#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0

*/
int main(void)
{
	int i, n, sum;
	char c;

	srand(time(0));

	sum = 0;
	for (i = 0; sum < 2772 - 122; i++)
	{
		n = rand() % 62;
		if (n < 26)
		{
			c = 'A' + n;
		}
		else if (n < 52)
		{
			c = 'a' + (n - 26);
		}
		else
		{
			c = '0' + (n - 52);
		}
		putchar(c);
		sum += c;
	}
	for (i = 0; i < 3; i++)
	{
		n = 2772 - sum;
		if (n < 26)
		{
			c = 'A' + n;
		}
		else if (n < 52)
		{
			c = 'a' + (n - 52);
		}
		else
		{
		c = '0' + (n - 52);
		}
		putchar(c);
		sum += c;
	}
	return (0);
}
