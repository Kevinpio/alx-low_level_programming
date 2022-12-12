#include <stdio.h>
/**
 * main - Entry point
 *
 * Descrition - a program that prints the alphabet in lowercase,
 *
 * followed by a new line.
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int k;
		k = 0;
		while (k <= 9)
		{
		putchar(k);
		if (k == 9)
		putchar('\n');
		k++;
		}
		return (0);
}
