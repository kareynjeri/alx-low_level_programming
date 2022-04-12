#include <stdlib.h>
#include "dog.h"

/**
*init_dog - intializes a variable of type struct dog
*@d:memory adress of struct dog
*@name:name of dog of type string
*@age:age of dog as a float
*@owner:owner of dog of type string
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return (NULL);
d->name = name;
d->age = age;
d->owner = owner;
}
