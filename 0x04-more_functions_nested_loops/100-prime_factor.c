#include<stdio.h>
/**
 * main - prints the largest prime of 612852475143
 * Return: Always 0 (Success
 */
int main(void)
{
	int a = 2;
	long num = 612852475143;

	while (a != num)
	{
		if (num % a == 0)
		{
			num = num / a;
		}
		else
		{
			a++;
		}
	}
	printf("%ld\n", num);
	return (0);
}
