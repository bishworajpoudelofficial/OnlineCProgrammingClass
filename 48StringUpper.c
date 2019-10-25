#include <stdio.h>
#include <string.h>

int main(){

char firstName[25];


printf("Enter first name:\n");
gets(firstName);

printf("Upper First name is %s",strupr(firstName));

return 0;
}
