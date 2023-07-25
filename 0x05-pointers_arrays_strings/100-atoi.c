#include "main.h"
/**
 * _atoi - converst a string to integer
 * @s: char array string
 * Return: first integer found in string
 */
int _atoi(char *s)
{
	int a;
	int x, y;

	x = 0;
	y = -1;
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '-')
			y *= -1;

		if (s[a] > 47 && s[a] < 58)
		{
			if (x < 0)
				x = (x * 10) - (s[a] - '0');
			else
				x = (s[a] - '0') * -1;
			if (s[a + 1] < 48 || s[a + 1] > 57)
				break;
		}
	}
	if (y < 0)
		x *= -1;

	return (x);
}
