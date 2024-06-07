#include "main.h"
/**
 * is_prime_number - This is my function
 * @n: This is my variable
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime(n, 2));
}
/**
 * is_prime - This is my function
 * @n: This is my variable
 * @i: This is my variable
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime(int n, int i)
{
if (n == i)
return (1);
if (n % i == 0)
return (0);
return (is_prime(n, i + 1));
}
