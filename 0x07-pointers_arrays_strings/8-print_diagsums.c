#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals of a square matrix
 *
 * @a: The matrix to calculate the diagonals' sum
 * @size: The size of the matrix
 *
 * Return: void (no return value)
 */
void print_diagsums(int *a, int size)
{
	int count1 = 0;
	int count2 = 0;
	int x;

	for (x = 0; x < size; x++)
	{
		count1 += a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		count2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", count1, count2);
}
