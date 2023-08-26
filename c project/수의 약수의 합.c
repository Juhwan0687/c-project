#include <stdio.h>

int DivisorSum(int n);

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",DivisorSum(n));
}

int DivisorSum(int n){
	int x,sum=0;
	for(x=1;x<=n;x++){
		if(n%x==0){
			sum+=x;	
		}
	}
	return sum;
}
