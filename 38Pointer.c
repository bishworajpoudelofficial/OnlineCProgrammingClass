#include <stdio.h>

int main(){
// Pointer: It is a variable that contain address of other variable.

int a = 10; //normal variable
int *p = &a; // pointer variable
int x;

x = *p;




printf("The value of a is %d\n",a);
printf("The value of p is %d\n",p);
printf("The value of x is %d",x);

return 0;
}
