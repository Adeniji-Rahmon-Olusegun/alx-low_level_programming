#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings but
 * takes n-bytes of the second string
 *
 * @s1: string1
 * @s2: string2
 *
 * @n: n-bytes
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	char *ptr_str;
	int str_len1 = 0, str_len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL && s2 == NULL)
		return NULL;

	for (i = 0; s1[i] != '\0'; i++)
		str_len1++;
	for (j = 0; s2[j] != '\0'; j++)
		str_len2++;

	if (n < (size_t)(str_len2))
		ptr_str = (char *)malloc(sizeof(char) * (n + 1));
	else if (n >= (size_t)(str_len2))
		ptr_str = (char *)malloc(sizeof(char) * (str_len2 + 1));

	if (ptr_str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		*(ptr_str + i) = s1[i];
	if (n >= (size_t)(str_len2))
	{
		for (j = 0; s2[j] != '\0'; j++)
			*(ptr_str + (str_len1 + j)) = s2[j];
		*(ptr_str + (str_len1 + j)) = '\0';
	}
	else if (n < (size_t)(str_len2))
	{
		j = 0;

		while ((size_t) j < n && s2[j] != '\0')
		{
			*(ptr_str + (str_len1 + j)) = s2[j];
			j++;
		}
		*(ptr_str + (str_len1 + j)) = '\0';
	}
	return (ptr_str);
}
