#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
putchar('\n');
}
