#include <stdio.h>

int main(){
	int a=3;
	int b=5;
	int c=3;
	
	printf("a=%d b=%d\n",a,b);
	
	a=b;
	b=c;
	
	printf("a=%d b=%d",a,b);
}
