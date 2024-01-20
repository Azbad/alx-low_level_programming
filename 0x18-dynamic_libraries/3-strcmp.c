#include "main.h"

/**
 * _strcmp - Compares two strings.
 *
 * @s1: First string for comparison.
 * @s2: Second string for comparison.
 *
 * Return: Positive, negative, or zero integer based on comparison.
 */
int _strcmp(char *s1, char *s2)
{
	int k = 0;

	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
		k++;
	}
	return (0);
}
