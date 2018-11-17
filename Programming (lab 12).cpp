#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *firstFile;
	fopen_s(&firstFile, argv[1], "rt");
	if (firstFile == NULL) { printf("ERROR\n"); }
	else { printf("COMPLETE\n"); }

	FILE *secondFile;
	fopen_s(&secondFile, argv[2], "rt");
	if (secondFile == NULL) { printf("ERROR\n"); }
	else { printf("COMPLETE\n"); }

	FILE *thirdFile;
	fopen_s(&thirdFile, argv[3], "ab");
	fclose(thirdFile);
	fopen_s(&thirdFile, argv[3], "w");
	if (thirdFile == NULL) { printf("ERROR\n"); }
	else { printf("COMPLETE\n"); }

	char string[100];

	while (fgets(string, 100, firstFile) != NULL)
	{
		fputs(string, thirdFile);
		fputs("\n", thirdFile);
	}

	while (fgets(string, 100, secondFile) != NULL)
	{
		fputs(string, thirdFile);
		fputs("\n", thirdFile);
	}

	_fcloseall();
	return 0;
}