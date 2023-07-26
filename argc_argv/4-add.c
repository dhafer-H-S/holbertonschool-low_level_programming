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
	int x, y, t;
for (x = 1; x < argc; x++)
{
	for (y = 0; argv[x][y]; y++)
		if (argv[x][y] < 48 || argv[x][y] > 57)
{
		printf("Error\n");
	return (1);
	}
	t += atoi(argv[x]);
}
printf("%d\n", t);
return (0);
}
