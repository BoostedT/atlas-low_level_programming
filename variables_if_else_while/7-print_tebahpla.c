#include <stdio.h>
/**
 * main - prints alphabet backwards
 *
 * Return: 0
 */
int main(void)
{
char c = 'z';
while (c >= 'z')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
