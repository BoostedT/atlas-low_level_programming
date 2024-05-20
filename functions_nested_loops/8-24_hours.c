#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * @void: no argument
 * Return: 24 hours of Jack Bauer
 */
void jack_bauer(void)
{
int t, w;

for (t = 0; t < 24; t++)
{
for (w = 0; w < 60; w++)
{
_putchar(t / 10 + '0');
_putchar(t % 10 + '0');
_putchar(':');
_putchar(w / 10 + '0');
_putchar(w % 10 + '0');
_putchar('\n');
}
}
}
