// sum of 3 numbers
#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    printf("Tell me three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3); //do not give space in &and variable
    
    printf("The sum of three numbers is %d\n", num1 + num2 + num3); // \n is for new line
    
    return 0;
}

