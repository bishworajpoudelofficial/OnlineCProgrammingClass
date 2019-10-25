/*
Syntax: switch(which one to switch){
case 1:
statements;
}

*/
#include <stdio.h>

int main(){
	int number;
	printf("Enter Number:");
	scanf("%d",&number);
	
	// Check the number using switch case
	switch(number){
		case 1:
			printf("Day is Sunday");
			break;
		
		case 2: 
			printf("Day is monday");
			break;
		
		case 3: 
			printf("Day is tuesday");
			break;
		
		default:
			printf("Invalid Option");		
	}
	
	return 0;
}
