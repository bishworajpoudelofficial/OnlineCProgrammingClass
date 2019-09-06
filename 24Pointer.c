#include <stdio.h>

int main(){
	/*
	Pointer: It is one variable that store address of other variable.	
	*/
	
	int a = 10;
	int *p;
	
	p= &a;
	

	printf("%x",p);
	return 0;
}
