//2. Create union for employee name, age, and sarary and print all the
//details.
#include <stdio.h>
#include <string.h>

union employee{
	int age;
	float salary;
	char name[20];
};
int main(){
	union employee a1;
	a1.age = 10;
	printf("%d\n",a1.age);
	a1.salary = 20000.0;
	printf("%f\n",a1.salary);
	
	strcpy(a1.name, "Bishworaj");
		printf("%s\n",a1.name);
	
	return 0;
}
