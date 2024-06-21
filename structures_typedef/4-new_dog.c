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
if (name == NULL || owner == NULL)
return NULL;

    
int name_len = _strlen(name) + 1;
int owner_len = _strlen(owner) + 1;
dog_t *t_dog = malloc(sizeof(dog_t));
if (t_dog == NULL)
Return NULL;
t_dog->name = malloc(sizeof(char) * name_len);
if (t_dog->name == NULL) {
free(t_dog);  
return NULL;
}
t_dog->owner = malloc(sizeof(char) * owner_len);
if (t_dog->owner == NULL) {
free(t_dog->name);  
free(t_dog);        
return NULL;
}

_strcpy(t_dog->name, name);
_strcpy(t_dog->owner, owner);
t_dog->age = age;
return t_dog; 
}
