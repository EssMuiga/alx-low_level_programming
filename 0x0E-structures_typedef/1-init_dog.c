#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - Function that initializes dog struct variable
 * @d: struct name
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Return: 0 if successful
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
