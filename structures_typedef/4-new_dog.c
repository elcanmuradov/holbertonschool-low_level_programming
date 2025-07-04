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
dog_t->name = name;
dog_t->age = age;
dog_t->owner = owner;
return (dog_t);
}
return (NULL);
}
