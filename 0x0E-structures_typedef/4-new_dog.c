#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: input string
 *
 * Return: length of string
 */

int _strlen(const char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;

	return (count);
}

/**
 * _strcpy - copies a string.
 *
 * @dest: destination of copy
 * @src: source of copy
 *
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
		dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: struct pointer dog
 *         NULL if failed
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
