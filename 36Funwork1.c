#include <stdio.h>
#define PI 3.14
float findArea(float radious);
int main(){
// WAP in c that print area of circle using function. [Which accept parameter]

printf("The area of circle whose radius is 5 is %f",findArea(5));
return 0;
}

float findArea(float radious){
	float r = PI * radious * radious;
	return r;
}
