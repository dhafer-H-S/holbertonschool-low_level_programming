#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print_alphabet [a - z]
 *
 */
void print_alphabet(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
}
