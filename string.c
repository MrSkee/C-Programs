/*Sean Kee*/
/*Takes in string input, returns frequency of each character*/
#include <stdio.h>
#include <string.h>

int main()
{
	char input[100];
	char charin;
	char letters[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int i;
	int j;
	int x = 0;
	printf("Input a string\n#: ");
	fgets(input, sizeof(input), stdin);
		
	for (i = 0; i < 52; i++)
	{
		int sum = 0;
		for (j = 0; j < 100; j++)
		{
			if (input[j] == letters[i])
				sum++;
			if (input[j] == '\n')
				break;
		}
		if (sum != 0)
			printf("%c = %d\n", letters[i], sum);
	}

	return 0;
}
