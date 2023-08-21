// A Code to calculate square of a number
#include <stdio.h>
int square(int num) {
	return num * num;
}
int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	int result = square (num);
	printf("Square: %d\n" , result);
	return 0;
}
