#include <stdio.h>
#include <time.h>
/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
char c; = 'a'; char d; = 'A';
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
putchar('\n');
return (0);
}
