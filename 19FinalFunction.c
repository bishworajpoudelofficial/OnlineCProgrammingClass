#include<stdio.h>

int DoStep1();
int main(){
	
	int age = DoStep1("Himal",22);
return 0;
}

//Type/ Parameter

int DoStep1(char name[], int age){
printf("Hello %s. You are %d years old",name, age);
return age;
}


