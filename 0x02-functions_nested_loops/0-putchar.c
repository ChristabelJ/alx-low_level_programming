#include main.h  
/**
 * main - check the code for main.h
 * Return: Always 0.
 */
int main(void)
{
	char main[] = "Main";
	int i;

	for (i = 0; main[i] != '\0'; i++)
	{
		_putchar(main[i]);
	}
	_putchar('\n');
	return (0);
}
