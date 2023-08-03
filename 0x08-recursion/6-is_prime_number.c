#include "main.h"
/**
 * is_prime_number - determine if number id prime
 * @n: number
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (prime(n, 2));
}
/**
 * my_sqrt - returns sqrt of number
 * @x: number
 * @i: number acting as divisor
 * Return: square root of x
 */

int my_sqrt(int x, int i)
{
	int square;

	square = i * i;
	if (square >= x)
		return (i);
	else
		return (my_sqrt(x, i + 1));
}

/**
 * prime - helper fuction to find prime
 * @n: number
 * @d: incrementor divisor
 * Return: 0 if not prime, 1 if prime
 */
int prime(int n, int d)
{
	if (n % d == 0)
		return (0);
	else if (prime(n, 1) < d)
		return (1);
	else
		return (prime(n, d + 1));
}
