#include "main.h"
/**
  * _islower - check alphabet in lowercase
  * @c: specify parameter
  * Return: 1 if c is lowercase otherwise 0
  */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
