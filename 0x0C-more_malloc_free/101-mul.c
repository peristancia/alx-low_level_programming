#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * is_digit - checks if a string contains a non-digit character
 * @s: string to be evaluated
 * Return: 0 if a non digit is found, 1 othewise
 */
int is_digit(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] < '0' || s[i] > '9')
{
return (0);
}
i++;
}
return (1);
}
/**
* _strlen - returns the leghth of a string
* @s: string to be evaluated
* Return: the length of the string
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
* errors - handles errors for main
*/
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
* main - multiplies two positive number
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
char *s1, *s2;
int len1, len2, len, i, carry, digit1, digit2, *results, a = 0;
s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
errors();
len1 = _strlen(s1);
len2 = _strlen(s2);
len = len1 + len2 + 1;
results = malloc(sizeof(int) * len);
if (!results)
return (1);
for (i = 0; i <= len1 + len2; i++)
results[i] = 0;
for (len1 = len1 - 1; len1 >= 0; len1--)
{
digit1 = s1[len1] - '0';
carry = 0;
for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
{
digit2 = s2[len2] - '0';
carry += results[len1 + len2 + 1] + (digit1 *digit2);
results[len1 + len2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
results[len1 + len2 + 1] += carry;
}
for (i = 0; i < len - 1; i++)
{
if (results[i])
a = 1;
if (a)
putchar(results[i] + '0');
}
if (!a)
putchar('0');
putchar('\n');
free(results);
return (0);
}
