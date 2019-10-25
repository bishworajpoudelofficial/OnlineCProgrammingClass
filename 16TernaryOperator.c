// Ternary operator Syntax condition? stat if true : stat if false.
#include <stdio.h>

int main(){
	int age;
	printf("Enter You Age:");
	scanf("%d",&age);
	
	age>22 ? printf("You are voter.") : printf("You are not voter."); 
	
	return 0;
}
