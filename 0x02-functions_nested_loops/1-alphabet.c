#include "main.h"
/**
 * print_alphabet - check the code for main.
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letra = 'a';
	char retorno = '\n';

	while (letra <= 'z')
	{
		_putchar (letra);
		letra++;
	}
	_putchar (retorno);
}
