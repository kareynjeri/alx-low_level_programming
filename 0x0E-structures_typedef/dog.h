#ifndef DOG_H
#define DOG_H
/**
*struct dog-represents a dog with a name age and owner
*@name:contains name of variable dog
*@age:contains age of variable dog
*@owner:contains owner of variable dog
**/

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;
#endif
