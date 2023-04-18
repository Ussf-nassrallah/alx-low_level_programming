#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int _strlength(char *str);

char *_strcpy(char *dest, char *src);

/**
 * new_dog - function that create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: ...
*/

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *newdog;

	int nameLen = _strlength(name);

	int ownerLen = _strlength(owner);

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}

	(*newdog).name = malloc(sizeof(char) * (nameLen + 1));

	if ((*newdog).name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	(*newdog).owner = malloc(sizeof(char) * (ownerLen + 1));

	if ((*newdog).owner == NULL)
	{
		free(newdog);

		free(newdog->name);

		return (NULL);
	}

	_strcpy((*newdog).name, name);

	_strcpy((*newdog).owner, owner);

	(*newdog).age = age;

	return (newdog);

}

/**
 * _strlength - faunction that return length of string
 * @str: string will be operated
 * Return: int
 */

int _strlength(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		index++;
	}

	return (index);
}

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;
	int j = 0;

	while (*(src + index) != '\0')
	{
		index++;
	}
	for (; j < index ; j++)
	{
		dest[j] = src[j];
	}

	dest[index] = '\0';

	return (dest);
}
