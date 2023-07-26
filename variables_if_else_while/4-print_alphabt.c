#include <stdio.h>
/**
 * main - Declare alphabets from  [a - z] except e and q
 *
 *Return: 0
 */
int main(void)
{
char i;
for  (i = 'a'; i <= 'z'; i++)
{
if (i != 'e' && i != 'q')
{
putchar(i);
};
};
putchar('\n');
return (0);
}
