#include <stdio.h>

int main(){
	int a=5,b=10;
	
	a++; --b; 
	a=b%a;
	b=--a+ ++b;
	
	printf("%d %d\n",a,b);
}
