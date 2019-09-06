#include <stdio.h>

int main(){
	int a[3][3], b[3][3], c[3][3], i, j;
	printf("Enter 9 Number for matrix A:\n");
	
	for(i=0; i<3; i++){
		
		for(j=0; j<3; j++){
			scanf("%d",&a[i][j]);
		}
	}
		printf("Enter 9 Number for matrix B:\n");
	
		for(i=0; i<3; i++){
		
		for(j=0; j<3; j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("The sum of Matrix is:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			
			c[i][j] = a[i][j]+ b[i][j];
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}

/*
	int matrix1[2][3] = {
	
	{1,2,3},
	{4,5,6}
	
	
	};
	int matrix2[2][3] = {
	
	{0,1,2},
	{-3,5,6}
	
	};
	
	printf("%d",matrix1[1][2]);
	
*/
