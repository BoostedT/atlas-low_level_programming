#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98 followed by a new line
 * @n: integer to start counting from
 * Return: void
 */
void print_to_98(int n)
{
int t, w;

if (n <= 98)
{
for (t = n; t <= 98; t++)
{
if (t == 98)
{
printf("%d\n", t);
else if (t != 98)
printf("%d, ", t);
}
}
else if (n >= 98)
{
for (w = n; w >= 98; w--)
{
if (w == 98)
printf("%d\n", w);
else if (w != 98)
printf("%d, ", w);
}
}
}
}
