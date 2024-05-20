#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: void
 */
void times_table(void)
{
int i, j, result;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
result = i * j;
if (j == 0)
{
_putchar('0' + result);
}
if (result < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + result);
}
else if (result >= 10)
{
_putchar(',');
_putchar(' ');
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}
}
_putchar('\n');
}
}
