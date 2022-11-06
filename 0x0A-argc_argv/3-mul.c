#include <stdio.h>
/**
 * main - display name of program
 * @argc:int
 * @argv:string
 * Return:int
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
 14  
0x0A-argc_argv/1-args.c
@@ -0,0 +1,14 @@
#include <stdio.h>
/**
 * main - display num of arg
 * @argc:int
 * @argv:string
 * Return:int
 */
int main(int argc, char *argv[] __attribute__((unused)))
{

		printf("%d\n", argc - 1);

	return (0);
}
 35  
0x0A-argc_argv/100-change.c
@@ -0,0 +1,35 @@
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum number of coins to make change
 * @argc: int
 * @argv: string
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, n, s, ch = 0;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	s = atoi(argv[1]);
	if (s < 1)
		printf("0\n");
	else
	{
		for (i = 0; i < 5 && s; i++)
		{
			n = s / c[i];
			ch += n;
			s -= n * c[i];
		}
		printf("%d\n", ch);
	}
	return (0);
}
 17  
0x0A-argc_argv/2-args.c
@@ -0,0 +1,17 @@
#include <stdio.h>
/**
 * main - display all arg
 * @argc:int
 * @argv:string
 * Return:int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
 26  
0x0A-argc_argv/3-mul.c
@@ -0,0 +1,26 @@
#include <stdio.h>
#include <stdlib.h>
/**
 * main - mul 2 argv
 * @argc:int
 * @argv:string
 * Return:int
 */
int main(int argc, char *argv[])
{
	int x, i, j;

if (argc != 3)
{
	printf("Error\n");
	return (1);
}
else
{
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	x = i * j;
	printf("%d\n", x);
}
return (0);
}
 31  
0x0A-argc_argv/4-add.c
@@ -0,0 +1,31 @@
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add
 * @argc:int
 * @argv:string
 * Return:int
 */
int main(int argc, char *argv[])
{
	int x = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		x += atoi(argv[i]);
	}
	printf("%d\n", x);
	return (0);
}
