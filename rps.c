/*Sean Kee*/
/*Rock Paper Scissors Game, Best of 5*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int playerScore = 0;
	int cpuScore = 0;
	char playerInput;
	int cpuAction;
	int round = 1;
	int playerAction;

	printf("Play Rock Paper Scissors, Best of 5.\nR: Rock\nP: Paper\nS: Scissors\n\n");

	do
	{
		printf("#:");
		scanf("%c", &playerInput);
		srand(time(0));
		cpuAction = rand();
		cpuAction = (cpuAction % 3) + 1;

		switch(playerInput)
		{
			case 'r':
			case 'R':
				{
					playerAction = 1;
					if(cpuAction > playerAction)
						cpuScore++;
					else
						if(playerAction > cpuAction)
							playerScore++;
	
					printf("Result:\nYour Score: %d\n CPU Score: %d\n", playerScore, cpuScore);
					round++;
					break;
				}
			case 'p':
			case 'P':
				{
					playerAction = 2;
					if(cpuAction > playerAction)
						cpuScore++;
					else
						if(playerAction > cpuAction)
							playerScore++;

					printf("Result:\nYour Score: %d\n CPU Score: %d\n", playerScore, cpuScore);
					round++;
					break;
				}
			case 's':
			case 'S':
				{
					playerAction = 3;
					if(cpuAction > playerAction)
						cpuScore++;
					else
						if(playerAction > cpuAction)
							playerScore++;

					printf("Result:\nYour Score: %d\n CPU Score: %d\n", playerScore, cpuScore);
					round++;
					break;
				}
		}
	} while (round <= 5);

	if (playerScore > cpuScore)
		printf("Congrats! You Win!\n");
	else
		printf("You lost.\n");

	return 0;
}
