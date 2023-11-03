#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: smallest input
 * @max: largest input
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
	{
		a[i] = min + i;
	}

	return (a);
}
