/*Sean Kee*/
#include <stdio.h>

int main()
{
	char op;
	float value1;
	float value2;
	float answer;
	
	printf("Welcome to THE CALCULATOR\n");
	printf("*************************\n\n");

	printf("Choose an Operator\n+ - * / %%\n#: ");
	scanf("%c", &op);
	printf("Input value 1\n#: ");
	scanf("%f", &value1);
	printf("Input value 2\n#: ");
	scanf("%f", &value2);

	switch(op)
	{
		case '+':
			answer = value1 + value2;
			break;
		case '-':
			answer = value1 - value2;
			break;
		case '*':
			answer = value1 * value2;
			break;
		case '/':
			answer = value1 / value2;
			break;
		case '%':
			answer = (int)value1 % (int)value2;
			break;
		default:
			printf("Please restart the program and enter a valid operation\n");
	}
	printf("%.2f %c %.2f = %.2f\n", value1, op, value2, answer);

	return 0;
}
