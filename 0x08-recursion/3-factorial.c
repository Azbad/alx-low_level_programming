#include "main.h"

/**
 * factorial - returns factorial of number
 * @n: factorial of number
 *
 * Return: the factorial of given number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}

