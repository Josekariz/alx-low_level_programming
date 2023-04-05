#include "main.h"
#include <stdio.h>

/**
 * print_diag_sums - prints the sum of the two diagonals of a square matrix
 * @a: the matrix
 * @size: the size of the matrix
 *
 * Return: void
 */
void print_diag_sums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int row, col;

	for (row = 0; row < size; row++)
	{
		sum1 += *(a + row * size + row);
	}

	for (row = 0, col = size - 1; row < size; row++, col--)
	{
		sum2 += *(a + row * size + col);
	}

	printf("%d, %d\n", sum1, sum2);
}
