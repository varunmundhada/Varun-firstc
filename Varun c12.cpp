// Basic Arithmetic
#include <stdio.h>

int main() {
    int num1 = 11, num2 = 11;
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient = (float)num1 / num2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);
    
    return 0;
}
// can change any number in the place of num1 and num2
