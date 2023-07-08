#include <stdio.h>

int main(){
	int a=7;
	int b=5;
	int c=3;
	int d=0;
	int s=a*1000+c*100+b*10+d;
	int f=d*100+b*1000+c*10+a;
	int minus=s-f;
	printf("%d",minus);
} 
