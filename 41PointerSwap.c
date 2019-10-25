#include <stdio.h>

int main(){

int a = 20;
int b = 30;
printf("The value of a is %d and value of b is %d\n",a,b);
swap(&a,&b);
printf("The value of a is %d and value of b is %d",a,b);
return 0;
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
