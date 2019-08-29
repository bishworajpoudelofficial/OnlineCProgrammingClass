#include <stdio.h>


int main(){
	
	int presentdays  = 91;
	int bonus = 0;

	
	if(presentdays >90){
		
		if(presentdays >= 95){
			bonus = bonus+5;
		}else{
			bonus+=2;
		}
		
		printf("Bonus = %d",bonus);
	}
	
	
	return 0;
}
