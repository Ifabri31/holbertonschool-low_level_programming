#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - return the length of a string
 * @s: puntero a un char
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (len);
}
/**
 * *_strcpy - copia una cadena en otra
 * @dest: cadena primera
 * @src: cadena segunda
 *
 * Return: pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - perro nuevo
 * @name: nombre
 * @age: edad
 * @owner: dueÃo
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(_strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	new_dog->owner = malloc(_strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
