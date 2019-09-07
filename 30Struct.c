#include <stdio.h>

struct Person{

char name[50];
char address[50];
char phone[50];	
	
};

int main(){
	
	// Structure 
	struct Person p1, p2;
	
	printf("Enter Information for Person 1\n");
	
	printf("Enter person1 name:\n");
	gets(p1.name);
	
	printf("Enter person1 address:\n");
	gets(p1.address);	
	
	printf("Enter person1 phone:\n");
	gets(p1.phone);	
	
	printf("Person 1 Name is %s, address is %s and phone is %s",p1.name,p1.address,p1.phone);
	
	
	return 0;
}
