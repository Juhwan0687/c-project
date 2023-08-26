#include <stdio.h>

int AbsoluteValue(int n);

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",AbsoluteValue(n));
}

int AbsoluteValue(int n){
	if(n<0){
		return n*-1;
	}
	else{
		return n;
	}
}
