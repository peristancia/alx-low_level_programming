#include "main.h"
/**
 * _abs - computes the avsolute value of of an integer
 *@c: the number to be computed
 * Return: absolute value of a number or 0.
 */
int _abs(int c)
{
if (c < 0)
{
int abs_val;
abs_val = c * -1;
return (abs_val);
}
return (c);
}
