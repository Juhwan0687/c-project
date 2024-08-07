#include <stdio.h>

int main(){
	int a=3;
	int b=5;
	
	a=a+b;
	b=b+a;
	
	printf("%d %d\n",a,b);
	
	a=3;
	b=5;
	
	a=a-b;
	b=b-a;
	
	printf("%d %d",a,b);
}
