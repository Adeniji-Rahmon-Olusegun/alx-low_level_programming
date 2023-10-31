#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int s1_len = 0;
	int s2_len = 0;
	char *ptr_concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;

	for (j = 0; s2[j] != '\0'; j++)
		s2_len++;
	/*
	if ((sizeof(char) * (s1_len + s2_len + 1)) < (size_t)(s1_len + s2_len + 1))
	{
		return (NULL);
	}*/

	ptr_concat_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (ptr_concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		*(ptr_concat_str + i) = s1[i];

	for (j = 1; s2[j] != '\0'; j++)
		*(ptr_concat_str + (s1_len + j)) = s2[j];
	
	return (ptr_concat_str);
}
