#include <stdio.h>

void main(){
	int a,res;
	
	scanf("%d",&a);
	printf("%d\n",a/7==5);
	printf("%d\n",a%3==0);
	printf("%d\n",!(a%5==0));
	printf("%d\n",a%3==0&&a%2==0);
	printf("%d",a%4==0||a%7==0);
}
