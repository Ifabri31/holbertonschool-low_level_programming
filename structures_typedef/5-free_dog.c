#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - se muere un perrito
 * @d: pointer al perrito libre
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
