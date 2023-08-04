#include <stdio.h>

int main(){
	int n,m;
	scanf("%d",&n);
	
	int i=1;
	int sum=0;
	while(1){
		printf("%d",n%10);
		sum+=n%10;
		n/=10;
		if(n==0){
			printf("\n");
			break;
		}
	}
	printf("%d",sum);
}
