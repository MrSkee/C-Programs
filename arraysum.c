/*Sean Kee*/
/*Sums all the numbers in the array except the one at the given index; Returns new array*/
#include <stdio.h>

int main()
{
	int a;
	int i;
	int x;
	int sum = 0;
	printf("Input array length\n#: ");
	scanf("%d", &a);
	int array1[a];
	int array2[a];
	printf("Input values\n");
	
	for (i = 0; i < a; i++)
	{
		printf("#: ");
		scanf("%d", &array1[i]);
	}
	printf("Input a index to be checked and processed\n #:");
	scanf("%d", &x);
	
	for (i = 0; i < a; i++)
	{
		if (i == x)
			continue;
		sum += array1[i];
	}
	for (i = 0; i < a; i++)
	{
		if (i == x)
		{
			array2[x] = array1[x];
			printf("%d\n", array2[x]);
			continue;
		}
		array2[i] = sum;
		printf("%d\n", array2[i]);
	}
	return 0;
}
