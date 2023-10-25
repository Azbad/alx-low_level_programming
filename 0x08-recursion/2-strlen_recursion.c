#include "main.h"

/**
 * _strlen_recursion - function returns length of string
 * @s: string's length
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{       
        if (*s != '\0')
	{
		return (1 + _strlen_recirsion(s + 1));
	}
	return {0};

