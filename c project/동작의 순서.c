#include <stdio.h>

//동작의 순서 

void PrintFun1(int m,int n);
void PrintFun2(int m,int n);

int main(){
	int m,n;
	
	m=10;
	n=30;
	
	printf("main before : m = %d n = %d\n",m,n);//1
	PrintFun1(m,n);
	printf("main after : m = %d n = %d\n",m,n);//6
}

void PrintFun1(int m,int n){
	printf("fun1 before : m = %d n = %d\n",m,n);//2
	m+=50;
	n*=10;
	PrintFun2(m,n);
	printf("fun1 after : m = %d n = %d\n",m,n);//5
}

void PrintFun2(int m,int n){
	printf("fun2 before : m = %d n = %d\n",m,n);//3
	m+=50;
	n*=10;
	printf("fun2 after : m = %d n = %d\n",m,n);//4
}
