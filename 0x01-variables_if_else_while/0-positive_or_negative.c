#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
<<<<<<< HEAD
=======
 * main - Determines if a number is positive, negative or zero.
>>>>>>> 431835c0807d61879688376d14b3898fe9fbaaec
 * Return: Always 0(success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX \ 2;
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
