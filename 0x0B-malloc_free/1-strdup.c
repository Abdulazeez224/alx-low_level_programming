#include "main.h"
#include <stdlib.h>

/**
  * _strdup - return a pointer to a newly allocated space in memory
  * @str: string
  * Return: pointer of an array of chars
  */

char *_strdup(char *str)
{
	char *b;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		b = (char *)malloc(sizeof(char) * (i + 1));
	if (b == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		b[j] = str[j];
	return (b);
}
