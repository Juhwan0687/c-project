#include <stdio.h>

double fact(int n){
	if(n==1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}

int main(){
	int n;
	
	printf("정수를 입력 후 Enter>");
	scanf("%d",&n);
	
	printf("1부터 %d까지의 곱 : %.lf\n",n,fact(n));
}
