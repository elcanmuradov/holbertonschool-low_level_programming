#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Short description
 * @owner: First member
 * @age: Second member
 * @name: Third member
 *
 * Description: Longer description
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);



#endif /* DOG_H */
