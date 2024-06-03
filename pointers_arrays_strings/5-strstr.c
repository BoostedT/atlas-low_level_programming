#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to be scanned
 * @needle: string containing the characters to match
 * Return: pointer to the beginning of the located substring, or NULL if the substring is not found
 */
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be scanned
 * @needle: string containing the characters to match
 * Return: pointer to the beginning of the located substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int count = 0, a = 0, b = 0;
while (needle[count] != '\0')
{
count++;
}
if (count == 0)
{
return haystack; // Return haystack if needle is empty
}
while (haystack[b] != '\0')
{
if (haystack[b] == needle[0])
{
for (a = 0; a < count; a++)
{
if (haystack[b + a] != needle[a])
{
    break;
}
}
if (a == count)
{
return (haystack + b);
}
}
b++;
}
return NULL; // Return NULL if substring is not found
}
