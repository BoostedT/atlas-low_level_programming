#include "main.h"

/**
* strcpy - copy a string
* @dest: destination
* @src: source
* Return: pointer to dest
*/
char *_strcpy(char *dest, const char *src)
{
char *ret = dest;

while ((*dest++ = *src++));
return (ret);
}
