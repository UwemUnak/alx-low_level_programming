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
