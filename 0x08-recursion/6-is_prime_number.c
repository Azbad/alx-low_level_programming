#include "main.h"

/**
 * prime_a - returns if an input integer is a prime number
 * @x: number
 * @y: divider
 *
 * Return: 1 if prime, 0 otherwise
 */
int prime_a(int x, int y)
{
	if (x <= 1 || (x != y && x % y == 0))
	{
		return (0);
	}
	else if (x == y)
	{
		return (1);
	}
	return (prime_a(x, y + 1));
}

/**
 * is_prime_number - function checks if a number is prime or not
 * @n: number
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_a(n, 2));
}
