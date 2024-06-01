#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)
{
int i, j;
char leet[8] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T};
char leet2[8] = {'4', '4', '3', '3', '0', '0', '7', '7'};
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 8; j++)
{
if (s[i] == leet[j] || s[i] - 32 == leet[j])
{
s[i] = leet2[j];
}
}
}
return (s);
}
