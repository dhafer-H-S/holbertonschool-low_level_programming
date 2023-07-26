#include<stdio.h>
#include<stdlib.h>
/**
 * main-  program that prints all arguments it receives
 *
 * @argc: argc
 * @argv: argv
 * Return: void
 */
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
