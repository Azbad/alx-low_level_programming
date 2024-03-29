#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings, taking up to n characters from s2
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of characters from s2 to concatenate
 *
 * Return: A pointer to the concatenated string (s1 + n characters from s2)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 != NULL)
	{
		for (len1 = 0; s1[len1]; len1++)
			;
	}

	if (s2 != NULL)
	{
		for (len2 = 0; s2[len2]; len2++)
			;
	}

	if (n >= len2)
		n = len2;

	concatenated = malloc(sizeof(char) * (len1 + n + 1));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		concatenated[i] = s2[j];
		i++;
	}

	concatenated[i] = '\0';

	return (concatenated);
}
