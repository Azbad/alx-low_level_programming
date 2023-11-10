#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - function searches for an integer
 *
 * @size: number of elements in the array
 * @cmp: pointer to function to be used to compare values
 * @array: array of integers
 *
 * Return index of first elements on success or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
