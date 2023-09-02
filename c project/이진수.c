#include <stdio.h>
#include <stdlib.h>

int Binary(int n);

int main(){
	int n;
	printf("정수 입력 : ");
	scanf("%d",&n);
	Binary(n);
}

int Binary(int n){
	int ar[]={},i=0,k;
	while(1){
		if(n==1){
			break;
		}
		ar[i]=n%2;
		n/=2;
		i++;
	}
	for(i=i;i>=0;i--){
		printf("%d ",ar[i]);
	}
}
