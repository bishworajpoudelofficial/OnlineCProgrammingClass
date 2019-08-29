#include <stdio.h>

int main(){
	
	int firstNumber= 20;
	int secondNubmer = 50;
	int thirdNumber = 40;
	
	if(firstNumber> secondNubmer && firstNumber > thirdNumber){
		printf("First Number is Bigger");
	}else if(secondNubmer> firstNumber && secondNubmer > thirdNumber){
		printf("Second Number is Bigger");
	}else{
		printf("Third Number is Bigger");
	}
	
	
	return 0;
}
