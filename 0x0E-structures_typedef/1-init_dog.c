#include "main.h"
#include <stdio.h>

/**
 * init_dog -> initialises variables to sructure
 * @d: Structure to be initialized
 * @name: name of a dog.
 * @age: The age of a dog.
 * @owner: The owner of a dog.
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if ( d != NULL)
{
	d.(*name) = name;
	d.(*age) = age;
	d.(*owner) = owner;
}
}
