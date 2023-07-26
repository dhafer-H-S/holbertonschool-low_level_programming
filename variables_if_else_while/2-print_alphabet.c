#include <stdio.h>
/**
 * main - Declare a variable with the first member of the range [a - z]
 *
 *Return: 0
 */
int main(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
