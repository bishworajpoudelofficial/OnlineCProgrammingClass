// if else if else

/*
Syntax:
if(condition){
statement;
}else if(condition){
statement;
}else if(condition){
statement;
}else{
statement;
}
*/
#include <stdio.h>

int main(){
	int num1 = 200, num2 = 300, num3 =400;
	
	if(num1 > num2 && num1> num3){
		printf("Num1 is greater then num2 and num3");
	}else if(num2> num1 && num2>num3){
		printf("Num2 is greater then num1 and num3");	
	}else{
			printf("Num3 is greater then num1 and num2");	
	}
	
	
	return 0;
}
