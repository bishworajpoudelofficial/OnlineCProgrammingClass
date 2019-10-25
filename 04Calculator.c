#include <stdio.h>

int main(){
	// Our First Calculator in C
	
	// Declaring Variables
	int firstNumber = 100;
	int secondNumber = 20;
	int add, sub, mul, div, mod;
	
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
