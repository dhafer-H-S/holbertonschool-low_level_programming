#include<stdio.h>
#include<stdlib.h>
/**
 * main- program that prints the number of arguments passed into it
 *
 * @argc: argc
 * @argv: argv
 * Return: void
 */
int main(int argc, char **argv)
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
