#include <stdio.h>
// Swap String using pointer
void swap1(char **str1, char **str2){
	char *temp = *str1;
	*str1 = *str2;
	*str2 = temp;
	
} 

int main(){

char fname[100] = "Bishworaj";
char lname[100] = "Poudel";

swap1(&fname, &lname);

printf("First name is %s and last name is %s",fname, lname);

return 0;
}


