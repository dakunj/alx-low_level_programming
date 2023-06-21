#include <stdio.h>

int main(int argc, char *argv[])
{
	(void) argv; 
	/* Ignores argv */
	printf("%d\n", argc - 1);
	return (0);
}
