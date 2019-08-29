// WAP in c which find the person is voter or not voter from age

#include <stdio.h>

int main(){
	
	int age;
	
	printf("Enter your age:\n");
	scanf("%d",&age);
	
	if(age>= 18){
		printf("You are voter.");
	}else{
			printf("You are not voter.");
	}
	
	
	return 0;
}
