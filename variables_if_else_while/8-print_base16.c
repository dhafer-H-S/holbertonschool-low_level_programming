#include <stdio.h>
/**
 * main - Declare alphabets from  [a - z] [A - Z]
 *
 *Return: 0
 */
int main(void)
{
char a, A;
for  (A = '0'; A <= '9'; A++)
{
putchar(A);
};
for  (a = 'a'; a <= 'f'; a++)
{
putchar(a);
};
putchar('\n');
return (0);
}
