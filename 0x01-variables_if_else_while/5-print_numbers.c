#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
	int i;
		i = 0;
		while (i <= 9)
		{
		printf ("%d", i);
		if (i == 9)
		printf ('\n');
		i++;
		}
		return (0);
}
