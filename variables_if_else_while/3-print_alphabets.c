#include <stdio.h>
#include <time.h>
/**
 * main - prints a to z in lower case then in upper case.
 *
 * Return: 0
 */
int main(void)
{
char c = 'a';
char d = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (d <= 'Z')
{
putchar(d);
d++;
}
putchar(\n);
return (0);
}
