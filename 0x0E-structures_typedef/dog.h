#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for a dog
 * @name: name of dog, struct member 1
 * @age: age of dog, struct member 2
 * @owner: name of dog's owner, struct member 3
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*DOG_H*/
