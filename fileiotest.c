#include <stdio.h>

int main() {
	FILE *pFile;

	int num;
	int i;
	pFile = fopen("File.txt", "w");

	for (i = 0; i < 10; i++) {
		fprintf(pFile, "%d ", i);
	}

	fclose(pFile);

	pFile = fopen("File.txt", "r");

	fscanf(pFile, "%d", &num);
	printf("%d\n", num);
	
	fclose(pFile);

	return 0;
}
