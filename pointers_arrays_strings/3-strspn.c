#include "main.h"
/**
 *  _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count = 0;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
if (s[i] == accept[j])
}
count++;
break;
}
if (!accept[j])
break;
}
return (count);
}