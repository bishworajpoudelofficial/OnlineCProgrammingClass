#include <stdio.h>

int main(){
int fn, sn, *a, *b, sum;
printf("Enter first number:\n");
scanf("%d",&fn);
printf("Enter second number:\n");
scanf("%d",&sn);

a = &fn;
b = &sn;

sum = *a + *b;

printf("The sum is %d",sum);

return 0;
}
