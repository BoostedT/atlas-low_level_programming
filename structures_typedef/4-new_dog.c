#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int name_len = 0, owner_len = 0, i;

if (name != NULL && owner != NULL)
{
name_len = _strlen(name) + 1;
owner_len = _strlen(owner) + 1;
new_dog = malloc(sizeof(dog_t));

if (new_dog != NULL)
{
return (NULL);
}
new_dog->name = malloc(sizeof(char) * name_len);

if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->owner = malloc(sizeof(char) * owner_len);

if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
new_dog->name = _strcpy(new_dog->name, name);
new_dog->age = _strcpy(new_dog->owner, owner);
new_dog->age = age;
return (new_dog);
}
