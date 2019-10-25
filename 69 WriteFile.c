#include <stdio.h>
// fgetc(); fputc();
int main(){
FILE *fp;
char ch;

fp = fopen("bishworaj.txt","w");
printf("Enter value that you want to save and press q for quit.");
while(1){
	scanf("%c",&ch);
	if(ch == 'q'){
		break;
	}
	fputc(ch, fp);
}

fclose(fp);

	
	return 0;
}

