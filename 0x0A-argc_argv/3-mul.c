#include <stdio.h>
#include <stdlib.h>

/**
 * main - program multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array of command ine arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}