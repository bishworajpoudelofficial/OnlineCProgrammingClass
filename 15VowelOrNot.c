//WAP in c which tells user weather that is vowel letter or not.
#include <stdio.h>

int main(){
	
	char letter;
	printf("Enter Character:\n");
	scanf("%c",&letter);
	int isLowerCaseVowel, isUpperCaseVowel;
	// Return true is something is available
	isLowerCaseVowel = (letter == 'a' ||  letter == 'e' || letter == 'i'|| letter == 'o'|| letter == 'u');
	isUpperCaseVowel = (letter == 'A'|| letter == 'E' || letter == 'I'|| letter == 'O'|| letter == 'U' );
	
	if(isLowerCaseVowel || isUpperCaseVowel){
		printf("%c is vowel.",letter);
	}else{
		printf("%c is not vowel.",letter);
	
		}
	
	return 0;
}
