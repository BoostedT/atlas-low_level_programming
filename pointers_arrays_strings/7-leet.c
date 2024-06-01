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
char leet[8] = "aAeEoOtTlL";
char leet_enc[8] = "4433007711";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; leet[j] != '\0'; j++)
{
if (s[i] == leet[j])
{
s[i] = leet_enc[j];
}
}
}
return (s);
}