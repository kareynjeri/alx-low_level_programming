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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;
#endif
