#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: A pointer to a pointer to a char
 * @to: A pointer to a char
 *
 * Return: void (no return value)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
