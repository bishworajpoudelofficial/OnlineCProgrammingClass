#include <stdio.h>
#include <string.h>
struct student{
int id;
char name[20];
int mark;	
}

int main(){
	
	struct student s1;
	struct student s2;
	
	s1.id =1;
	s1.mark  =60;
	strcpy(s1.name, "Bishworaj");
	
	s2.id =3;
	s2.mark  =25;
	strcpy(s2.name, "Raman");
	
	// Printing Structure Value
	printf("s1 ID:%d s1 mark: %d s1 name: %s",s1.id, s1.mark, s1.name);
	
	
	return 0;
}

/*
Structure: Group of disimilar element.We can hold different variables
in same variable;

*/
