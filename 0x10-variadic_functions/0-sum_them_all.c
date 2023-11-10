#include "VARIADIC_FUNCTIONS.H"
#include <stdio.h>

/**
 * sum_them_all - function returns sum of all parameters
 *
 * @n: parameter number to be passed
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0, i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
