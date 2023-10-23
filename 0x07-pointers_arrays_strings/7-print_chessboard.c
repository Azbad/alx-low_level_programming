#include "main.h"

/**
 * print_chessboard - prints a chessboard of a given size
 *
 * @a: The chessboard to be printed
 *
 * Return: void (no return value)
 */
void print_chessboard(char (*a)[8])
{
	int k;
	int r;

	for (k = 0; k < 8; k++)
	{
		for (r = 0; r < 8; r++)
			_putchar(a[k][r]);
		_putchar('\n');
	}
}

