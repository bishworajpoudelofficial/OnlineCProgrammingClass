#include <stdio.h>
#include <string.h>

int main(){



char firstName[25];
char copyFirstName[25];

printf("Enter first name");
gets(firstName);

strcpy(copyFirstName,firstName);

printf("Firstname is %s",copyFirstName);



return 0;
}
