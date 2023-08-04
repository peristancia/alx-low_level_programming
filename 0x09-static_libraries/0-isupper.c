#include "main.h"
/**
 * _isupper - checks for lowr character
 *@c: the character to be checked
 * Return: 1 for upper character and 0 for anything else
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
