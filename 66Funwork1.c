#include <stdio.h>

int main(){
	
	// 1. Store 5 Values in pointer using malloc, calloc function and print them.
		int a=5, i, *p, *q;
	
	
	p = (int *)malloc(a*sizeof(int));
	q = (int *) calloc(a, sizeof(int));
	
	if(p == NULL){
		printf("Memory allocation fails.");
	}else{
		
		for(i=0; i<a; i++){
		//	printf("Enter value for p[%d]",i+1);
		//	scanf("%d",&p[i]);
		}
		
			for(i=0; i<a; i++){
			printf("%d is value and address is %d\n",p[i], &p[i]);
			
		}
		
	}
		if(q == NULL){
		printf("Memory allocation fails.");
	}else{
		
		for(i=0; i<a; i++){
			//printf("Enter value for p[%d]",i+1);
			//scanf("%d",&q[i]);
		}
		
			for(i=0; i<a; i++){
			printf("%d is value and address is %d\n",q[i], &q[i]);
			
		}
		
	}
	
	
	
	return 0;
}
