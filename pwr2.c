/*Sean Kee*/
/*Loops powers of 2 less than 1000*/
#include <stdio.h>

int main()
{
	int n = 1;
	int x = 2;

	while (x <1000)
	{
		printf("2 to the power of %d = %d\n", n, x);
		x *= 2;
		n++;
	}

	return 0;
}
