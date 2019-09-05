#include <stdio.h>

int main(){

//Array: It is a varible that store multiple values of same type

//float priceofID1= 1000;
//float priceofID2= 2000.0;
//float priceofID3= 3000.0;
//float priceofID4= 4000.0;
//float priceofID5= 5000.0;
//float priceofID6= 6000.0;
//float priceofID7= 7000.0;
//float priceofID8= 8000.0;
//float priceofID9= 9000.0;
//float priceofID10= 10000.0;

float priceofID[10];
int i;

//Getting Input From User
for(i=0; i<10; i++){
printf("Enter price of product id %d:\n",i+1);
scanf("%f",&priceofID[i]);

}

for(i=0; i<10; i++){
printf("The price of id %d is %.2f\n",i+1,priceofID[i]);	
}



	
return 0;
}
