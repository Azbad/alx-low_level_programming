#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes function given as parameter on element array
 * @array: array of an element
 * @size: size of array
 * @action: This is pointer to function to be executed
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size > 0)
	{
		action(*array);
		array++;
	}
}
