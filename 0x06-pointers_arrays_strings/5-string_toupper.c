#include "main.h"

/**
 * string_toupper - Convert lowercase characters to uppercase in a string.
 *
 * @n: The string to be converted.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *n)
{
    int i = 0;

    while (n[i] != '\0')
    {
        if (n[i] >= 'a' && n[i] <= 'z')
        {
            n[i] -= 32;  /* Convert to uppercase */
        }
        i++;
    }

    return (n);
}
