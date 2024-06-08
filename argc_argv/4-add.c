#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc < 1)
{
printf("0\n");
return (0);
}
while (--argc)
{
if (*argv[argc] < '0' || *argv[argc] > '9')
{
printf("Error\n");
return (1);
}
}
while (--argc)
{
printf("%d\n", atoi(argv[argc]));
}
return (0);
}
