#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point
  * Return: Always 0 (successful)
  */

int main(void)
{
	int alph;

	for (alph = '0'; alph <= '9'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
