#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string `dest`
 */
char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
dest[dest_len] = '\0';
return (dest);
};