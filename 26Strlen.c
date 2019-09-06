#include <stdio.h>
#include <string.h>

int main(){
//	String Function
char fullName[25];
int lengthofName;

// Getting Value From User
printf("Enter your full name:\n");
gets(fullName);
// Getting name length
lengthofName = strlen(fullName);

// Printing Value
printf("Your name is %s which have %d character in it.",fullName, lengthofName);
	
	
	return 0;
}
