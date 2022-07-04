#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{
	char letra = 'a';
	char retorno = '\n';

	while (letra <= 'z')

	{
		putchar (letra);
		letra++;
	}
	putchar (retorno);
	return (0);
}
