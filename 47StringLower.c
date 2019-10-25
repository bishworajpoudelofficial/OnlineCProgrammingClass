#include <stdio.h>
#include <string.h>

int main(){

char firstName[25];


printf("Enter first name:\n");
gets(firstName);

printf("Lower First name is %s",strlwr(firstName));

return 0;
}
