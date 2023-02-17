#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 *
 * Return: Always 0 (succesz)
 *
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
