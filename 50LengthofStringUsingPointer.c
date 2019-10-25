#include <stdio.h>
#include <string.h>
// WAP In C which find length of string using pointer
int main(){
char firstName[25];


printf("Enter first name:\n");
gets(firstName);

int length = string_in(firstName);

printf("The length of string is %d",length);

return 0;
}

int string_in(char *p){
	int count =0;
	while(*p != '\0'){
		count++;
		p++;
	}
	return count;
}
