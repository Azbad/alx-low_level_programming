#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function reallocates a memory block
 * @ptr: pointer to memory previously allocated
 * @old_size: size of allocated space for ptr
 * @new_size: size of new memory block
 *
 * Return: Pointer to the newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    char *nptr;
    unsigned int i;

    if (new_size == old_size)
        return ptr;

    if (ptr == NULL)
    {
        nptr = malloc(new_size);
    }
    else if (new_size == 0)
    {
        free(ptr);
        return NULL;
    }
    else
    {
        nptr = malloc(new_size);
        if (nptr == NULL)
            return NULL;

        for (i = 0; i < old_size && i < new_size; i++)
        {
            nptr[i] = ((char *)ptr)[i];
        }

        free(ptr);
    }
    return nptr;
}
