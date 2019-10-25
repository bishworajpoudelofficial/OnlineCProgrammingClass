//C calloc() - allocates memory and initializes all bits to zero.
//Syntax: ptr = (castType*)calloc(n, size);
//E.g: ptr = (float*) calloc(25, sizeof(float));

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a, i, *p;
	
	printf("Enter size for array:\n");
	scanf("%d",&a);
	
	p = (int *) calloc(a, sizeof(int));
		if(p == NULL){
		printf("Memory allocation fails.");
	}else{
		
		for(i=0; i<a; i++){
			printf("Enter value for p[%d]",i+1);
			scanf("%d",&p[i]);
		}
		
			for(i=0; i<a; i++){
			printf("%d is value and address is %d\n",p[i], &p[i]);
			
		}
		free(p);
		
	}
	
	return 0;
}


