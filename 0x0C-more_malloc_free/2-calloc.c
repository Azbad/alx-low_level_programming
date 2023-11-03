#include "main.h"
#include <stdlib>

/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: number of bloc of memory
 * @size: size of the element (int)
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	P = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
}
