#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * jack_bauer - check the code
 *
 * Return: 0
 */
void jack_bauer(void)
{
int M, H;
for (H = 0 ; H < 24  ; H++)
{
for (M = 0 ; M < 60 ; M++)
{
_putchar(H / 10 + '0');
_putchar(H % 10 + '0');
_putchar(':');
_putchar(M / 10 + '0');
_putchar(M % 10 + '0');
_putchar('\n');
}
}
}
