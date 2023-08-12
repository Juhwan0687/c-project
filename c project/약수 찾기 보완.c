#include <stdio.h>

int main(){
	int n;
	int i;
	int sum=0;
	int j;
	printf("Write number : ");
	scanf("%d",&n);
	printf("\nDivisors : ");
	for(i=1;i<=n;i+=1){
		if(n%i==0){
			printf("%d ",i);
			sum+=i;
			j+=1;
		}
	}
	printf("\nSum : %d\tNumbers : %d",sum,j);
}
