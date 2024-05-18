#include <stdio.h>
#include <time.h>
/**
 * main - program that prints the alphabet in lowercase, with a new line.
 *
 *
 * Return: Always 0.
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
