/*Sean Kee*/
/*Loop Fibonacci Sequence*/
#include <stdio.h>

int main()
{
	int fib[20] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765};
	int k;
	int i;
	printf("Input the number of Fibonacci numbers to be printed\n#: ");
	scanf("%d", &k);
	for (i = 0; i < k; i++)
		printf("%d\n", fib[i]);

	return 0;
}
