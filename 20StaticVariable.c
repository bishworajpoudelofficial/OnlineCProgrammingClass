#include<stdio.h>

void printNumber();

int main(){
printNumber();
printNumber();
return 0;
}

void printNumber(){
	static int num = 1;
	printf("Num is %d\n" ,num);
	num++;
}

