#include <stdio.h>
// Funwork 2. WAP that find quotent and remainder.
int main(){
	int num1, num2, quotient, remainder;
	printf("Enter First Number:\n");
	scanf("%d",&num1);
	printf("Enter Second Number: \n");
	scanf("%d",&num2);
	
	quotient = num1 / num2;
	remainder = num1 % num2;
	
	printf("The Quotient is %d amd remainder is %d",quotient,remainder);
	
	
	return 0;
}
