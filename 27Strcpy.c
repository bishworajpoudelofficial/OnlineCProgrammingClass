#include <stdio.h>
#include <string.h>

int main(){
	// strcpy is used to copy string
	char a[100] = "Hari";
	char b[100];
	
	strcpy(b,a);
	printf("%s",b);
	
	return 0;
}
