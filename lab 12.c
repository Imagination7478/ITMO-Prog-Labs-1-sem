#include <stdio.h>

int main(int argc, *char argv[])
{
	FILE *fo1;
	file1 = fopen(argv[0], "rt");
	FILE *fo2
	file2 = fopen(argv[1], "rt");
	
	FILE *fo3;
	file3 = fopen(argv[2], "wt");
	
	char string [100];
	while (fgets(string, 100, fo1) != NULL)
	{
		fputs(string, fo3);
		fputs("\n", fo3);
	}
	
	while (fgets(string, 100, fo2) != NULL)
	{
		fputs(string, fo3);
		fputs("\n", fo3);
	}
	return 0;
}