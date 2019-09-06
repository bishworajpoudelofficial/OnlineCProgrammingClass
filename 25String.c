#include <stdio.h>
#include <string.h>

int main(){
	
	char firstName[10];
	char lastName[10];
	
	printf("Enter First Name:\n");
	gets(firstName);
	printf("Enter Last Name:\n");
	gets(lastName);
	
	
	
	printf("Full name is %s %s",firstName, lastName);
	
	
	
	return 0;
}
