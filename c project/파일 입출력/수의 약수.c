#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,j=0,sum=0;
	
	printf("자연수 입력 : ");
	scanf("%d",&n);
	
	FILE *fp=fopen("Divisors.txt","w");
	
	fprintf(fp,"약수 : ");
	
	for(i=1;i<=n;i++){
		if(n%i==0){
			fprintf(fp,"%d ",i);
			j++;
			sum+=i;
		}

	}
	
	fprintf(fp,"\n약수의 개수 : %d\n약수의 합 : %d",j,sum);
}
