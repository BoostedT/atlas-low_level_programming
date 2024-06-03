#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to be scanned
 * @needle: string containing the characters to match
 * Return: pointer to the beginning of the located substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0, k = 0;
while (haystack[i] != '\0')
{
if (haystack[i] == needle[j])
{
k = i;
while (haystack[i] == needle[j] && haystack[i] != '\0' && needle[j] != '\0')
{
i++;
j++;
}
if (needle[j] == '\0')
{
return (haystack + k);
}
i = k;
j = 0;
}
i++;
}
return (0);
}
