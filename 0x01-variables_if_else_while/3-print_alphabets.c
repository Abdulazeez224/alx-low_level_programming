#include <stdio.h>

/**
  * main - Entry point
  * Return: Always 0 (successful)
  */

int main(void)
{
	int ch;
	int up;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (up = 'A'; up <= 'Z'; up++)
	{
		putchar(up);
	}
	putchar('\n');
	return (0);
}
