#include "dog.h"
#include <stddef.h>
#include <string.h>
/**
 * init_dog - function that initialises strusture
 * @d: parameter
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Description: longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
else
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
