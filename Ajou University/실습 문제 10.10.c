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
	
	printf("������ �Է� �� Enter>");
	scanf("%d",&n);
	
	printf("1���� %d������ �� : %.lf\n",n,fact(n));
}
