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
	int a, b;

if ((argc != '\0') && (argc == 3))
{
a = atoi(argv[1]);
b = atoi(argv[2]);

printf("%d\n", a *b);
}
else
{
		printf("Error\n");
	return (1);
}
return (0);
}
