#include "main.h"
#include <stdlib.h>

/**
  * create_array - create an array of chars
  * @size: size of the array
  * @c: char storage
  * Return: pointers of array
  */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
		return (NULL);
	t = malloc(sizeof(c) * size);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		t[i] = c;
	return (t);
}
