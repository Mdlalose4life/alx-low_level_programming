#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strcopy - Coppies the string pointed by
 * srcincluding null character
 *to buffer pointed by dest.
 * @dest: The buffer to coppy to.
 * @src: The buffer to coppy from.
 * Return: dest
 */

char *_strcopy(char *dest, char *src)
{
int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest = '\0');
}
/**
 * _strlen - Returns the length of a string.
 * @s: The string to be counted.
 * Return: The number of the counted character on a string.
 */

int _strlen(char *s)
{
	int _strlen = 0;

	while (*s++)
	_strlen++;

	return (_strlen++);
}
/**
 * dog_t *new_dog - A function that creates a new structure dog.
 * @name: The name of the struct.
 * @age: The age of a dog.
 * @owner: The owner of a dog.
 * Return: The new structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
if (name == NULL || age < 0 || owner == NULL)
	return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
	return (NULL);
}
dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (dog->name == NULL)
{
	free(dog);
	return (NULL);
}
dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (dog->owner == NULL)
{
	free(dog->name);
	free(dog);
	return (NULL);
}
dog->name = _strcopy(dog->name, name);
dog->age = age;
dog->owner = _strcopy(dog->owner, owner);
return (dog);
}
