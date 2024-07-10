#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - informacion del dog
 * @name: nobre del dog
 * @age: edad del dog
 * @owner: due√o del dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif
