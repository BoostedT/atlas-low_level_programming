#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
int i = 0;
char t = 'a';
while (i < 10)
{
t = 'a';
while (t <= 'z')
{
_putchar(t);
t++;
}
_putchar('\n');
i++;
}
}
