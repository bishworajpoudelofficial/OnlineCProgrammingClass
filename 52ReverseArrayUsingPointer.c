#include <stdio.h>

int main(){

int num[] = {1,2,3,4,5};

int *p, i;

p = &num[4];

for(i=0; i<5; i++){
	printf("Value is %d\n",*p);
	p--;
}




return 0;
}
