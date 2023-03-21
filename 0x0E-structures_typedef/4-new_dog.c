#include "dog.h"
#include <stdlib.h>
/**
 * new_dog -  creates a new dog.
 * @name: char type
 * @age: float type
 * @owner: char type
 * Return: Pointer to struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int i, j, k, n;

	i = 0, j = 0;
	newDog = malloc(sizeof(struct dog));

	if (newDog == NULL)
		return (NULL);

	while (name[i++])
		;
	while (owner[j++])
		;

	newDog->name = malloc(sizeof(newDog->name) * i);

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		newDog->name[k] = name[k];

	newDog->age = age;
	newDog->owner = malloc(sizeof(newDog->owner) * j);

	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (n = 0; n < j; n++)
		newDog->owner[n] = owner[n];

	return (newDog);
}
