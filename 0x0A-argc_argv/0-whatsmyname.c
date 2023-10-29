#include <stdio.h>

/**
 * main - print name,followed by new line
 *
 * @argc: number of command line arguments
 * @argv: array of command line arrguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
