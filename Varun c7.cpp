#include <stdio.h>
int main()
{
	int num1, num2;
	printf("Enter two numbers : ");
	scanf("%d %d", &num1, &num2);
	int product = num1 * num2;
	printf("The Product of %d and %d is %d\n", num1, num2, product);
	return 0;
}
