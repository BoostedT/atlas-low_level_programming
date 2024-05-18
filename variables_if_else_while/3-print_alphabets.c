#include <stdio.h>
#include <time.h>
/**
 * main - prints a to z in lower case then in upper case.
 *
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
if (c >= 'a' && c <= 'z')
{
putchar(c);
}
else if (c >= 'A' && c <= 'Z')
{
putchar(c);
}
putchar('\n');
return (0);
}
