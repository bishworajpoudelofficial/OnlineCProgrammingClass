#include <stdio.h>

void sayHello(char name[]);
int age = 22; // Global Scope

int main(){
	
	printf("Age is %d",age);
	sayHello("Bishworaj");
return 0;
}

void sayHello(char name[]){
	printf("Hello %s",name);
		printf("Age is %d",age);
}
