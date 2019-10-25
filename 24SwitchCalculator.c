#include <stdio.h>

int main(){
int number1, number2, choice;

printf("Enter number 1:\n");
scanf("%d",&number1);

printf("Enter number 2:\n");
scanf("%d",&number2);

printf("Enter 1 For Sum. 2 For Diff");
scanf("%d",&choice);
switch(choice){
	case 1:
		printf("The Sum is %d",number1+number2);
		break;
	case 2:
		printf("The diff is %d",number1-number2);
		break;	
}

return 0;
}
