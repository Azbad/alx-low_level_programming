#include "main.h"

/**
 * sqrt_a - returns the natural square root of a number
 * @x: number
 * @y: iterator
 *
 * Return: natural square root or -1
 */
int sqrt_a(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (sqrt_a(x, y + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number
 *
 * Return: the natural square root of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_a(n, 0));
}

