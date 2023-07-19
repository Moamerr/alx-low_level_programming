#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 * @n: int type number
 * Return: Absolute value of n (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
