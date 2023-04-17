#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that gets a length of string dog makima hohoh
 *
 * @str: the string to get the length
 *
 * Return: length of str
*/

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * _strcopy - a function that returns @dest with a copy of a string from @src
 *
 * @src: string to copy
 * @dest: copy string to here
 *
 * Return: @dest
*/

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: struct pointer dog
 *         0 if function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ana;

	if (!name || age < 0 || !owner)
		return (0);

	ana = (dog_t *) malloc(sizeof(dog_t));
	if (ana == 0)
		return (0);

	ana->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*ana).name == 0)
	{
		free(ana);
		return (0);
	}

	ana->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*ana).owner == 0)
	{
		free(ana->name);
		free(ana);
		return (0);
	}

	ana->name = _strcopy(ana->name, name);
	ana->age = age;
	ana->owner = _strcopy(ana->owner, owner);

	return (ana);
}
