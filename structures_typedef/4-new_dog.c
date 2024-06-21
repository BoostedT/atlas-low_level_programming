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
int i, name_len, owner_len;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

for (name_len = 0; name[name_len]; name_len++)
;
name_len++;

for (owner_len = 0; owner[owner_len]; owner_len++)
;
owner_len++;

new_dog->name = malloc(name_len * sizeof(char));
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
