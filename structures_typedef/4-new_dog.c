#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;
int name_len = 0, owner_len = 0;

if (name == NULL || owner == NULL)
return (NULL);
while (name[name_len])
name_len++;
while (owner[owner_len])
owner_len++;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
name_copy = malloc(name_len + 1);
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}
name_copy = name
owner_copy = malloc(owner_len + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog);
return (NULL);
}
owner_copy =  owne);
new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;
return (new_dog);
}
