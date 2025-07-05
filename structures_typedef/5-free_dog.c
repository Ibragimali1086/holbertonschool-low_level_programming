#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a dog struct
 * @d: pointer to the dog to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name)
		free(d->name);

	if (d->owner)
		free(d->owner);

	free(d);
}
