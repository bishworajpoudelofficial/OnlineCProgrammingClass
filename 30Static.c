#include <stdio.h>

void sayHello();


int main(){
	int i;
	for(i=0; i<10; i++){
		sayHello();
	}
return 0;
}

void sayHello(){
	static int num = 1;
	printf("Hello from number %d\n",num);
	 num++;
}
