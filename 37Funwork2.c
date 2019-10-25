#include <stdio.h>
// WAP in c that accept n number of array and sort them in decending.
int main(){

int n, i, j, temp; // size of array, i for loop

printf("Enter the number:\n");
scanf("%d",&n);

int num[n]; // define array

// store value in variable
for(i=0; i<n; i++){
	printf("Enter number %d:\n",i+1);
	scanf("%d",&num[i]);
}

//sorting value 10 20 40 30 50
for(i=0; i<n; i++){
	for(j=0; j<n; j++){
		if(num[i] > num[j]){
			temp = num[i];
			num[i] = num[j];
			num[j] =  temp; 
		}
	}
}

// printing value
for(i=0; i<n; i++){
	printf("\n%d\n", num[i]);
}






return 0;
}
