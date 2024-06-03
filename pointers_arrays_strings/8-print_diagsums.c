#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: matrix of integers
 * @size: size of matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, j, sum1 = 0, sum2 = 0, t, s = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
t = (i * size) + j;
sum1 += *(a + t);
}
if ((i + j) == (size - 1))
{
s = (i * size) + j;
sum2 += *(a + s);
}
}
}
printf("%d, %d\n", sum1, sum2);
}
