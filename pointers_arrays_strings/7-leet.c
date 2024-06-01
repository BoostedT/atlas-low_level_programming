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
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
char leet2[8] = {'0', '1', '3', '4', '5', '7', '8', '7'};
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
