#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: The main string to search
 * @accept: The characters to search for in s
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int k, j;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[k] == accept[j])
				return (s + k);
		}
	}
	return (0);
}
