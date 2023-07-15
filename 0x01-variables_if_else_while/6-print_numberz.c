#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print single digit numbers of base 10 usin putchar'
 * Return: Always 0(success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
