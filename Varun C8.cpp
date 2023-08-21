#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3); // Input three numbers

    int product = num1 * num2 * num3;
    printf("The product of %d and %d and %d is %d\n", num1, num2, num3, product);
    
    return 0;
}

