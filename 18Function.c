// Function: Group of code that perform certain task
#include <stdio.h>
void printName();
void printPersonName();

int main(){
	printPersonName("Hari Sharma");
		printPersonName("Sita Sharma");
	return 0;
}

void printName(){
printf("My name is Bishworaj Poudel.\n");
}

void printPersonName(char name[]){
printf("My name is %s.\n",name);	
}






