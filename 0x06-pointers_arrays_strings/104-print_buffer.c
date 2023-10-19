#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Print a buffer with specific formatting.
 *
 * @b: The buffer.
 * @size: The size of the buffer.
 *
 * Return: Always 0.
 */
void print_buffer(char *b, int size)
{
	int x;
	int y;
	int z;

	x = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (x < size)
	{
		y = size - x < 10 ? size - x : 10;
		printf("%08x: ", x);

		for (z = 0; z < 10; z++)
		{
			if (z < y)
				printf("%02x", *(b + x + z));
			else
				printf("  ");

			if (z % 2)
			{
				printf(" ");
			}
		}

		for (z = 0; z < y; z++)
		{
			int c = *(b + x + z);

			if (c < 32 || c > 126)
			{
				c = '.';
			}
			printf("%c", c);
		}

		printf("\n");
		x += 10;
	}
}
