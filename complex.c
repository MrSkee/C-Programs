/*Sean Kee*/
/*Complex Numbers*/
#include <stdio.h>
#include <string.h>

typedef struct {
	float real;
	float i;
} calc;

calc add(calc x, calc y) {
	calc calc;
	calc.real = x.real + y.real;
	calc.i = x.i + y.i;
	return calc;
}

calc sub (calc x, calc  y) {
	calc calc;
	calc.real = x.real - y.real;
	calc.i = x.i - y.i;

	return calc;
}

calc mult (calc x, calc y) {
	calc calc;
	calc.real = x.real * y.real;
	calc.i = x.i * y.i;

	return calc;
}

calc div (calc x, calc y) {
	calc calc;
	calc.real = x.real / y.real;
	calc.i = x.i / y.i;
}
void printResult(calc result) {
	printf("Results: \n");
	printf("%.02f\n", result.real);
	printf("%.02fi\n", result.i);
}
int main() {
	calc x;
	calc y;
	calc result;
	char op;
	printf("What would you like to do?\n1:+ 2:- 3:* 4:/\n#: ");
	scanf("%c", &op);
	printf("Input real value 1\n#: ");
	scanf("%f", &x.real);
	printf("Input imaginary value 1\n#: ");
	scanf("%f", &x.i);
	printf("Input real value 2\n#: ");
	scanf("%f", &y.real);
	printf("Input imaginary value 2\n#: ");
	scanf("%f", &y.i);
	switch(op) {
		case 1:
			result = add(x, y);
			break;
		case 2:
			result = sub(x, y);
			break;
		case 3:
			result = mult(x, y);
			break;
		case 4:
			result = div(x, y);
			break;
		default:
			printf("Invalid, restart program.\n");
	}
	printResult(result);

	return 0;
}
