#include <stdio.h>

int main(){
	int num1=10;
	int num2=20;
	
	int num3=++num1+num2++;
	
	printf("num1=%d\n",num1);
	printf("num2=%d\n",num2);
	printf("num3=%d\n",num3);
}
