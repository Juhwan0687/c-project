#include <stdio.h>

int plus(){
	int a=3;
	int b=2;
	
	return a+b;
}

void main(){
	int num=plus();
	
	printf("%d\n",num);
	printf("%d\n",plus());
	printf("%d\n",plus()+10);
}
