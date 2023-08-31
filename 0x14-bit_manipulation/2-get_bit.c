#include "main.h"
/**
*get_bit - returns the value of a bit at a given index
*@n: number to be returned
*@index: the index of a bit
*Return: the value of the bit at index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;
if (index > 63)
return (-1);
bit_val = (n >> index) & 1;
return (bit_val);
}
