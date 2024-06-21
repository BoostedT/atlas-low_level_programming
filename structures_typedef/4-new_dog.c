#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
int len = 0;

while (*s++)
len++;
return (len);
}

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int index = 0;

for (index = 0; src[index]; index++)
dest[index] = src[index];

dest[index] = '\0';
return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *crazy_dog;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

crazy_dog = malloc(sizeof(dog_t));
if (crazy_dog == NULL)
return (NULL);

crazy_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (crazy_dog->name == NULL)
{
free(crazy_dog);
return (NULL);
}

crazy_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (crazy_dog->owner == NULL)
{
free(crazy_dog->name);
free(crazy_dog);
return (NULL);
}

crazy_dog->name = _strcpy(crazy_dog->name, name);
crazy_dog->age = age;
crazy_dog->owner = _strcpy(crazy_dog->owner, owner);
return (crazy_dog);
}
