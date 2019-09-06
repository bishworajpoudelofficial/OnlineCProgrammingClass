#include <stdio.h>
#include <string.h>

int main(){
	
	char firstName[25]="Bishworaj ";
	char lastName[25] = "Poudel";
	
	strcat(firstName, lastName);
	
	printf("Full name is %s",firstName);
	
	return 0;
}
