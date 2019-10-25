// Program that find the entered number is odd or even. Odd: 1,3, 5, 7, 9 Even 2,4,6,8
#include <stdio.h>


int main(){
int number;
	printf("Enter number:");
	scanf("%d",&number);
	
	if(number % 2 == 0){
		printf("Even Number");
	}else{
		printf("Odd Number");
	}
	

return 0;
}
