//1. Create Structure that store name, age, phone of 5 student and
// print them
#include <stdio.h>
struct student{
	char name[20];
	int age;
	int phone;
};
int main(){
	// Array: Collection of same element;
	
	struct student s[5];
	int i;
	
	for(i=0; i<5; i++){
		printf("Enter name, age and phone of student %d:\n",i+1);
		scanf("%s %d %d",&s[i].name, &s[i].age, &s[i].phone);
	}
	
	// For Printing
	for(i=0; i<5; i++){
		printf("Student %d \nName: %s, age: %d, phone: %d  ",i+1,s[i].name,s[i].age,&s[i].phone);
		
	}
	
	
	
	
	return 0;
}
