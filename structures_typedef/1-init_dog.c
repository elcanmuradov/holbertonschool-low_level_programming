#include "main.h"
#include <stddef.h>

/**
 * init_dog - funct
 * @d: arg1
 * @age: arg2
 * @name: arg3
 * @owner: owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
