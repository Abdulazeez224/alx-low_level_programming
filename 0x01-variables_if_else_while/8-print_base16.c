#include <stdio.h>

/**
  * main - Entry point
  * Return: Always 0 (sucessful)
  */

int main(void)
{
	int ch;
	int ex;

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
	}
	for (ex = 'a'; ex <= 'f'; ex++)
	{
		putchar(ex);
	}
	putchar('\n');
	return (0);
}
