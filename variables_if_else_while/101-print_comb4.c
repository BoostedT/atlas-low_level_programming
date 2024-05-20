#include <stdio.h>
/**
 * main - prints all possible combinations of three digits
 * Return: 0
 */
int main(void)
{
int t, b, w;

for (t = 48; t < 58; t++)
{
for (b = 49; b < 58; b++)
{
for (w = 50; w < 58; w++)
{
if (w > b && b > t)
{
putchar(t);
putchar(b);
putchar(w);
if (t != 55 || b != 56)
{
putchar(',');
putchar(' ')
}
}
}
}
}
putchar('\n');
return (0);
}
