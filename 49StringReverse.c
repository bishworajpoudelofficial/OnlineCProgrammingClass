#include <stdio.h>
#include <string.h>

int main(){

char firstName[25];


printf("Enter first name:\n");
gets(firstName);

printf("Revese First name is %s",strrev(firstName));

return 0;
}
