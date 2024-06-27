#include "dog.h"

/**
 * free_dog - frees the memory block allocated for struct dog
 * @d: pointer to the structure dog.
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
