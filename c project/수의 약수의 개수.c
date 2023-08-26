#include <stdio.h>

int DivisorCont(int n);

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",DivisorCont(n));
}

int DivisorCont(int n){
	int x,sum=0;
	for(x=1;x<=n;x++){
		if(n%x==0){
			sum+=1;	
		}
	}
	return sum;
}
