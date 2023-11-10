#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - function that prints a name
 *
 * @name: name to be printed
 * @f: pointer to the function that prints a name
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
