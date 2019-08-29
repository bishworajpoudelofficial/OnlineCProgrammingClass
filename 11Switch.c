#include <stdio.h>

int main(){
	
	int dayno;
	
	printf("Enter no of day:");
	scanf("%d",&dayno);
	
	switch(dayno){
		
		case 1:
			printf("Sunday");
			break;
		
		case 2:
			printf("Monday");
			break;
			
		case 3:
			printf("Tue");
			break;	
			
		case 4:
			printf("Wed");
			break;					
				
		case 5:
			printf("Thru");
			break;
			
		case 6:
			printf("Fri");
			break;

		case 7:
			printf("Sat");
			break;
			
		default:
		printf("Invalid Option Given");			
	}
	
	
	return 0;
}
