#include <stdio.h>

/**
  * main - Entry point
  * Return: Always 0 (successful)
  */

int main(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		if (ch != 9)
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
