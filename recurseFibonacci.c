/*Sean Kee*/
/*Recurse Fibonacci Sequence*/
#include <stdio.h>

void fibonacci(int k, int i, int fib[])
{
	if (k == i)
		printf("%d\n", fib[k]);
	else
	{
		printf("%d\n", fib[i]);
		i++;
		fibonacci(k, i, fib);
	}
}

int main()
{
	int k;
	int fib[20] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765};
	int i = 0;
	printf("Input number of Fibonacci numbers to be printed\n#: ");
	scanf("%d", &k);
	k--;
	fibonacci(k, i, fib);

	return 0;
}
