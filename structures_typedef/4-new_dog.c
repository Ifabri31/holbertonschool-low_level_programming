#include "dog.h"
/**
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	if (new_dog != NULL)
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
	}
}
