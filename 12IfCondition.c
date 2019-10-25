/*
If Condition: It tells the program to perform certain task only.

Syntax: if(condition)
		statement;
		
*/
#include <stdio.h>


int main(){
	
	int age;
	printf("Enter You Age:");
	scanf("%d",&age);
	
	if(age>22){
	printf("You are voter.");
	printf("Somehting");	
	}else{
	printf("You are not voter.");	
	}

	
	return 0;
}

