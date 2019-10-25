#include <stdio.h>
// Break: Break the entire loop; Continue: Bypass
int main(){
int i;
for(i= 1; i<=100; i++){
	if(i==10)
	continue;
	printf("%d\n",i);

}


return 0;
}
