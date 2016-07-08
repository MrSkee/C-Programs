/*Sean Kee*/
#include <stdio.h>

int main()
{
	float input;
	int result;

	printf("Input a integer to be checked...\n#:");
	scanf("%f", &input);
	result = (int)input % 2;

	if (input == (int)input)
		if (result == 1)
			printf("%d is ODD\n", (int)input);
		else
			printf("%d is EVEN\n", (int)input);
	else
		printf("%.02f is not an integer! Restart the program and try again.\n", input);

	return 0;
}
