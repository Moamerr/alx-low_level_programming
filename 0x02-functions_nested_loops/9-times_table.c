#include "main.h"
/**
 * times_table - prints the 9 times table from 0
 *Return: Always 0 (Success)
 */
void times_table(void)
{
	int n = 0;
	int i;
	int j;

	while (n < 10)
	{
		i = 0;
		while (i < 10)
		{
			j = n * i;
			if (j > 9)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			else if (i != 0)
			{
				_putchar(' ');
				_putchar(j + '0');
			}
			else
			{
				_putchar(j + '0');
			}
			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			i++;
		}
		_putchar('\n');
		n++;
	}
}
