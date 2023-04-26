#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int row, colum, result;

	for (row = 0; row <= 9; row++)
	{
		for (colum = 0; colum <= 9; colum++)
		{
			result = row * colum;

			if (colum == 0)
			{
				_putchar('0');
			}
			else if (result <= 9)
			{
				_putchar(' ');
				_putchar('0');
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			if (colum != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
