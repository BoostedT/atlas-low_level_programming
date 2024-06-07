#include "main.h"

/**
 * factorial - calculate the factorial of a number
 * @n: the number to calculate the factorial of
 * Return: the factorial of n
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}