#include <stdio.h>
/*
int main(){
	int a,b;
	
	a=12;
	b=56;
	
	if(a>b)
	{
		printf("%d는 %d보다 크다.\n",a,b);
	}
	else
	{
		printf("%d는 %d보다 크지 않다.\n",a,b);
	}
}*///위와 아래의 코드의 실행 결과는 같다. 
int main(){
	int a,b,c;
	
	a=12;
	b=56;
	c=a>b;
	
	if(c)
	{
		printf("%d가 %d보다 크다.\n",a,b);
	}
	else
	{
		printf("%d가 %d보다 크지 않다.\n",a,b);
	}
}
