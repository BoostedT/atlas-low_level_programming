#include "main.h"
/**
 * pow_recursion - returns the value of x raised to the power of y
 * @x: base
 * @y: exponent
 * Return: x raised to the power of y
 */
int pow_recursion(int x, int y)
{
    
if (y < 0)
return (-1);
if (y == 0)
return (1);
if (y == 1)
return (x);
return (x * pow_recursion(x, y - 1));
}
