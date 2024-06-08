#include "main.h"
/**
 *  _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
int j = 0, i = 0;
unsigned int count = 0;

while (s[i] != ' ' && s[i] != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
}
}
i++;
}
return (count);
}
