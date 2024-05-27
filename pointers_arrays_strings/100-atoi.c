#include "main.h"

/**
* _atoi - convert a string to an integer
* @s: string to convert
* Return: integer
*/
int _atoi(char *s)
{
int i, n, sign;

i = n = 0;
sign = 1;
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
n = n * 10 + sign * (s[i] - '0');
if (n != 0 && (s[i] < '0' || s[i] > '9'))
break;
i++;
}
return (n);
}
