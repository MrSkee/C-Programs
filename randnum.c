/*Sean Kee*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/*Random Number Generator*/
	int r;
	srand(time(0));
	r = rand();
	r = (r % 10)+1;
	/*must add 1 because apparently C starts counting at 0, not 1*/
	
	/*User Input*/
	printf("I'm thinking of a number from 1 and 10. Bet you can't guess it.\n #:");
	int input;
	scanf("%d", &input);
	if (input == r)
		printf("Damn. You got it right.\n");
	else
		if
			(input > 10 || input < 1)
				printf("Can you read? I said from ONE to TEN. Jeez you're dumber than I thought.\n");
		else
			if (input > r)
				printf("Nope, too high. It was %d. Guess you aren't smart enough.\n", r);
			else
				printf("Nope, too low. It was %d. Knew you wouldn't get it.\n", r);

	return 0;
}
