#include<stdio.h>

// Function Recursion: Function which call itself.

int main(){
	int nums;
	printf("Enter number\n");
	scanf("%d",&nums);
	int result = fact(nums);
	printf("The factorial of %d is %d", nums, result);
	

return 0;
}

int fact(int num){
	if(num ==1){
		return 1;
	}else{
		return num*fact(num-1);
	}
}

//fact(5)= 5* fact(4)
//fact(4) = 4 * fact(3)
//fact(3) = 3 * fact(2);
//fact(2) = 2* fact(1)




