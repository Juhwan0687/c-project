#include <stdio.h>

int main(){
	int a,b;
	a=20;
	b=5;
	a+=b;
	printf("a=%d\n",a);
	a*=b;
	printf("a=%d\n",a);
	a-=b;
	printf("a=%d\n",a);
	a/=b;
	printf("a=%d\n",a);
	a%=b;
	printf("a=%d\n",a);
}
