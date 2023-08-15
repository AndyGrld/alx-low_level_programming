#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free dog struct
 * @d: dog struct
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
