#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: unsigned long int
 * @m:  unsigned long int
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int flips = 0;

while (n > 0 || m > 0)
{

int t1 = (n & 1);
int t2 = (m & 1);

if (t1 != t2)
{
flips++;
}
n >>= 1;
m >>= 1;
}
return (flips);
}
