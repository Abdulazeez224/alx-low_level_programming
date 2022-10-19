#include "main.h"
/**
  * print_alphabet_x10 - Entry point
  */

void print_alphabet_x10(void)
{
	int a;

	count = 0;

	while (count < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		count++;
		_putchar('\n');
	}
}
