#include <stdio.h>
struct student{
	char name[20];
	int rollno;
	int mark;
};

struct address{
	char address[100];
	struct student s;
};

int main(){
	
	struct address a;
	printf("Enter name, roll, mark and address");
	scanf("%s %d %d %s",a.s.name, &a.s.rollno, &a.s.mark, a.address);
	
	printf("\n\n%s %d %d %s",a.s.name, a.s.rollno, a.s.mark, a.address);	
	
	return 0;
}
