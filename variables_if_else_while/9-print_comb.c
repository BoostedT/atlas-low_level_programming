#include <stdio.h>
/**
* main - program that prints all possible combinations of single-digit numbers.
*
* Return: Always 0.
*/
int main(void)
{
char c = '0';
while (c <= '9')
{
putchar(c);
if (c != '9')
{
putchar(',');
}
c++;
}
putchar('\n');
return (0);
}
