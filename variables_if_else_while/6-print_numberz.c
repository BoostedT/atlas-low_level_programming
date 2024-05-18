#include <stdio.h>
/**
 * main - prints 0-9 followed by new line using putchar only
 *
 * Return: 0
 */
int main(void)
{
int a = '0';
while (a <= 9)
putchar(a);
a++;
}
putchar('\n');
return (0);
}
