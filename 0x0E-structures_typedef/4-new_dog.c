#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: pointer to the new structure formed, NULL on fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *myDog;
	int i, nlen, olen;

	if (!name || !owner)
		return (NULL);

	myDog = malloc(sizeof(dog_t));

	if (!myDog)
	{
		return (NULL);
	}

	for (nlen = 0; name[nlen] != '\0'; nlen++)
		;

	for (olen = 0; owner[olen] != '\0'; olen++)
		;

	myDog->name = malloc(nlen + 1);
	myDog->owner = malloc(olen + 1);
	if (!myDog->name || !myDog->owner)
	{
		free(myDog->name);
		free(myDog->owner);
		free(myDog);
		return (NULL);
	}

	for (i = 0; i < nlen; i++)
		myDog->name[i] = name[i];

	myDog->age = age;

	for (i = 0; i < olen; i++)
		myDog->owner[i] = owner[i];

	return (myDog);
}
