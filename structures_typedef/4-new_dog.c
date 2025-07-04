#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - funct
 * @name: atrg1
 * @age: arg2
 * @owner: arg1
 * Return: struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
if (name != NULL && age != NULL && owner != NULL)
{
int i = 0;
int k = 0;
while(name[i] != '\0')
{
i++;
}
while(owner[k] != '\0')
{
k++;
}
dog_t->name = malloc(i * sizeof(char));
if (dog_t->name == NULL)
{
return (NULL);
}
dog_t->name = name;

dog_t->age = age;
dog_t->owner = malloc(k * sizeof(char));
if (dog_t->owner == NULL)
{
return (NULL);
}
dog_t->owner = owner;
return (dog_t);
}
return (NULL);
}
