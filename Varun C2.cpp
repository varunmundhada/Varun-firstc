// Input statement
#include<stdio.h> //input output standard lib.
int main() //main block or main function
{
	int num; //telling the num is integer type (4 byte storage) till a limit no.
	printf("A Number:"); //print statement
	scanf("%d", & num ); // scanf is input statement, %d is showing integer value  & represents address of the variable
	printf("Your Number is %d ", num);
	return 0;
}
