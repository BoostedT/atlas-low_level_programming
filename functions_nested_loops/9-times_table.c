#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: void
 */
void times_table(void)
{
int i, j, result;

for (i = 0; i < 9; i++)
{
result = i * j;
if (j != 10)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar(' ');
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
