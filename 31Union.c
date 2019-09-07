#include <stdio.h>

union Employee{
char name[50];
char address[50];
char phone[50];	
float salary;
int age;
};

int main(){
	// Union
		union Employee p1, p2;
			printf("Enter Information for Person 1\n");
	
	printf("Enter person1 name:\n");
	gets(p1.name);
	
	printf("Enter person1 address:\n");
	gets(p1.address);	
	
	printf("Enter person1 phone:\n");
	gets(p1.phone);	
	
	printf("Enter person1 salary:\n");
	scanf("%f",&p1.salary);	
	
		printf("Enter person1 age:\n");
	scanf("%d",&p1.age);
	
	printf("Person 1 Name is %s, address is %s and phone is %s. Salary: %.2f, Age: %d",p1.name,p1.address,p1.phone, p1.salary, p1.age);
	
	
	return 0;
}
