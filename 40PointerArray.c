#include <stdio.h>

int main(){

int a[5] = {10,20,30,40,50};
int *p, i;

p = &a[0];

for(i =0; i<5; i++){
printf("The value of p is %d\n",*p);
p++;	
}


return 0;
}
