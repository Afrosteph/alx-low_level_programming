#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * Return: times table
 */
void times_table(void)
{
	int num1, mum2, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (num2 = 1; num2 <= 9; num2++)
		{
			prod = (num1 * num2);
			if ((prod / 10) > 0)
			{
				_putchar((prod / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((prod % 10) + '0');

			if (cone < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

