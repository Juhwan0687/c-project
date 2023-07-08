#include <stdio.h>

int main(){
	int a;
	
	a++;
	a++;
	a++;
	a-=5;
	a-=5;
	a--;
	a--;
	printf("a=%d",a);
	return 0;
}//결과 : -9 
