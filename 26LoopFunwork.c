#include <stdio.h>

int main(){
printf("Using For loop\n");
int i;
for(i=80; i<=90; i++){
	printf("%d\n",i);
}
printf("Using While loop\n");
i = 80;
while(i<=90){
	printf("%d\n",i);
	i++;	
}
printf("Using Do While loop\n");
i = 80;
do{
	printf("%d\n",i);
	i++;	
}while(i<=90);
return 0;
}
