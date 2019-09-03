#include<stdio.h>
void meroFunction();
int num1 =20;

int main(){
// Function Scope: Visiblity of variables within program.	

printf("Number 1 is %d", num1);
meroFunction();
return 0;
}

void meroFunction(){
	num1++;
printf("Number 1 is %d", num1);
	
}


