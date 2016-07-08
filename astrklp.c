/*Sean Kee*/
/*Half Diamond*/
#include <stdio.h>

int main()
{
	int a; //number of astricks
	int l; //line number
	int b;

	for (l = 1; l <= 10; l++)
	{		
		if (l > 5)
		{
			for (b = 4; b > 0; b--)
			{
				for (a = 1; a <= b; a++)
				{
					printf("*");
				}
				printf("\n");
			}
			break;
		}
		else
		{
			for (a = 1; a <= l && l <= 5; a++)
			{
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}
