#include <stdio.h>

int main(){
	int a=12;
	int b=3;
	a-=b;
	b++;
	printf("a=%d b=%d\n",a,b);
	a/=3;
	b--;
	printf("a=%d b=%d\n",a,b);
	a*=2;
	b++;
	printf("a=%d b=%d\n",a,b);
	a/=6;
	b++;
	printf("a=%d b=%d\n",a,b);
	a+=b;
	a--;
	b--;
	printf("a=%d b=%d",a,b);
}
