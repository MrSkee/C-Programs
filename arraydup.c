/*Sean Kee*/
/*Array input, remove duplicates, and output*/
#include <stdio.h>

int main()
{	
	int i;
	int a;
	printf("Input array length\n#: ");
	scanf("%d", &a);
	int array1[a];
	printf("Input Numbers\n");

	for (i = 0; i < a; i++)
	{
		printf("#: ");
		scanf("%d", &array1[i]);
	}
	for (i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (array1[j] == array1[i] && j != i)
				array1[j] = ('\n');
		}
	}
	printf("\n");
	for (i = 0; i < a; i++)
	{
		if (array1[i] != ('\n'))
			printf("%d\n", array1[i]);
	}
	return 0;
}
