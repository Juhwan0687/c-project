#include <stdio.h>

void add(int num1,int num2);

void main(){
	int number1=5;
	int number2=10;
	
	add(number1,number2);
	
	printf("Number1=%d\n",number1);
	printf("Number2=%d\n",number2);
}

void add(int num1, int num2){
	num1=num1+10;
	num2=num2+10;
}
