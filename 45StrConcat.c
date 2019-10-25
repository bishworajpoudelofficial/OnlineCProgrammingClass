#include <stdio.h>
#include <string.h>

int main(){

char firstName[25];
char lastName[25];
char fullName[50];

printf("Enter first name");
gets(firstName);

printf("Enter last name");
gets(lastName);


printf("Full name is %s",strcat(firstName,lastName));
return 0;
}
