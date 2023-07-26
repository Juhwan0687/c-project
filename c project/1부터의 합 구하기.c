#include <stdio.h>

int main(){
	int n,i;
	int sum=0;
	scanf("%d",&n);
	
	for(i=1;i<n+1;i++){
		sum+=i;
	}
	printf("합 : %d\n",sum);
}
