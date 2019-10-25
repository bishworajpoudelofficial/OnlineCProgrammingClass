#include <stdio.h>

int main(){

int number;
printf("Enter number to check:\n");
scanf("%d",&number);

// Checking
if(number<0){
	printf("The number is negative");
}else if(number == 0){
	printf("The number is 0");
}
else{
	printf("The number is positive");
}

return 0;
}
