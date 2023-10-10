#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen -> will get the length of a string.
 * @str: The given string to be measured.
 * Return: Length of the string.
 */
int _strlen(char *str)
{
	int lngth;
	
	lngth = 0;
	while (*str++)
		lngth++;

	return (lngth);
}

/**
 * _strcopy -> Copies a string pointed to by src.
 * @dest: The buffer to store the copy of the string. 
 * @src: The source of the string.
 * Return: The destination of the pointer.
 */
char *_strcopy(char *dest, char *src)
{
	int pos = 0;

	for (pos = 0; src[pos]; pos++)
	{
		dest[pos] = src[pos];
	}
	dest[pos] = '\0';

	return (dest);
}

/**
 * new_dog ->for creating a new dog container.
 * @name: The given name of the dog.
 * @age: The given age of the dog.
 * @owner: The given owner of the dog.
 * Return: The new constructed struct of dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	my_dog->name = _strcopy(my_dog->name, name);
	my_dog->age = age;
	my_dog->owner = _strcopy(my_dog->owner, owner);

	return (my_dog);
}
