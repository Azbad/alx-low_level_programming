#include "main.h"

/**
 * reverse_array - Reverses an array of integers.
 * @a: Array to be reversed.
 * @n: Number of elements in the array.
 *
 * Return: Always void (no return).
 */
void reverse_array(int *a, int n)
{
	int k, r;

	for (k = 0; k < n--; k++)
	{
		r = a[k];
		a[k] = a[n];
		a[n] = r;
	}
}
