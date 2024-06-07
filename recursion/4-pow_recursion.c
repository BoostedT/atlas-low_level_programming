#include "main.h"
/**
 * pow_recursion - returns the value of x raised to the power of y
 * @X: integer
 * @y: power
 * Return: on Success 1.
 * on error -1.
 */
int pow_recursion(int x, int y)
{
    
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * pow_recursion(x, y - 1));
}
