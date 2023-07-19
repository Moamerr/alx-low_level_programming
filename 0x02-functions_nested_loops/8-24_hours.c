#include "main.h"
/**
 * jack_bauer - prints every minute of Jack Bauer
 *
 *Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int n = 0;
	int i = 0, j = 0, k = 0, l = 0;

	while (n < 1440)
	{
		_putchar(i + '0');
		_putchar(j + '0');
		_putchar(':');
		_putchar(k + '0');
		_putchar(l + '0');
		_putchar('\n');
		l++;
		if (l > 9)
		{
			l = 0;
			k++;
		}
		if (k > 5)
		{
			k = 0;
			j++;
		}
		if (j > 9)
		{
			j = 0;
			i++;
		}
		n++;
	}
}
