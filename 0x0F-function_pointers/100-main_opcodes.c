#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the opcodes of itself
 * @argc: number of arguments produced by program
 * @argv: array pf pointer to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int bytes, index;
	unsigned char *address = (unsigned char *)main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%02x", opcode);

		if (index == bytes - 1)
			break;

		printf(" ");
		address++;
	}
	printf("\n");

	return (0);
}
