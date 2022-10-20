#include "main.h"
/**
  * print_sign - print the sign of a number
  * @n: specify parameter
  * Return: 1 if + sign otherwise 0
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('+');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
