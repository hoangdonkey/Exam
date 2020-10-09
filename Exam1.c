#include <stdio.h>
int sum(int x, int y)
{
	int sum;
	sum = x + y;
	return sum;
}
int sub(int x, int y)
{
	int sub;
	sub = x - y;
	return sub;
}
int mul(int x, int y)
{
	int mul;
	mul = x * y;
	return mul;
}
float div(int x, int y)
{
	float div;
	div = (float)x / (float)y;
	return div;
}
int main(int argc, char const *argv[])
{
	int a = 0, b = 0, c;

	Calculate:
	printf("\n\nCalculation:\n");
	printf("============\n");
	printf("1. Input Number\n");
	printf("2. Calculate Sum\n");
	printf("3. Calculate Subtraction\n");
	printf("4. Calculate Multiplication\n");
	printf("5. Calculate Division\n");
	printf("6. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &c);

	switch(c)
	{
		default:
		{
			printf("Syntax error.\n");
		}
		case 1:
		{
			printf("Enter 2 number(a b): ");
			scanf("%d %d", &a, &b);
			goto Calculate;
		}
		case 2:
		{
			printf("Sum: %d\n", sum(a, b));
			break;
		}
		case 3:
		{
			printf("Subtraction: %d\n", sub(a, b));
			break;
		}
		case 4:
		{
			printf("Multiplication: %d\n", mul(a, b));
			break;
		}
		case 5:
		{
			printf("Division: %.2f\n", div(a, b));
			break;
		}
		case 6:
		break;
	}

	return 0;
}