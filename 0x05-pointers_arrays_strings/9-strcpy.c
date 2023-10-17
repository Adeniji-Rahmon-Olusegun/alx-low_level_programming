#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string
 * @dest: buffer
 * @src: pointer
 * Return: pointer to buffer
 */

char *_strcpy(char *dest, char *src)
{
	int counter;

	for (counter = 0; src[counter] != '\0'; counter++)
	{
		dest[counter] = src[counter];
	}

	dest[counter] = '\0';

	return (dest);
}
