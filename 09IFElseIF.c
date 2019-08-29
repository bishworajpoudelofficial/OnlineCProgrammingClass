#include <stdio.h>

int main(){
	
	int mark;
	printf("Enter your mark\n");
	scanf("%d",&mark);
	
	
	if(mark >= 90){
		printf("Mark is greater then 90");
	}else if(mark >80){
		printf("Mark is greater then 80");
	}else if(mark > 70){
	printf("Mark is greater then 70");	
	}else{
		printf("Something Went Wrong");
	}
	
	return 0;
}
