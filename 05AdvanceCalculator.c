#include <stdio.h>

int main(){
	// Our First Calculator in C
	
	// Declaring Variables
	int firstNumber, secondNumber, add, sub, mul, div, mod;
	
	// Getting User Input
	printf("Enter first Number: \n");
	scanf("%d",&firstNumber);
	
	printf("Enter second Number:\n");
	scanf("%d",&secondNumber);
	
	// Calcuating
	add = firstNumber + secondNumber;
	sub = firstNumber - secondNumber;
	mul = firstNumber * secondNumber;
	div = firstNumber / secondNumber;
	mod = firstNumber % secondNumber;
	
	// Printing
	printf("The sum is %d\n",add);
	printf("The sub is %d\n",sub);
	printf("The mul is %d\n",mul);
	printf("The div is %d\n",div);
	printf("The mod is %d",mod);	
	return 0;
}
