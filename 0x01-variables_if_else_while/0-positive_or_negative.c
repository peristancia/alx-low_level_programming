#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Print positive or negative
 * Return: Always 0(succes)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("98 is positive\n", n);
{
else if (n == 0)
{
printf("0 is zero\n", n);
}
else
{
printf("-98 is negative\n", n);
}
return (0);
}
