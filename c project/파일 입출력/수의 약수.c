#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,j=0,sum=0;
	
	printf("�ڿ��� �Է� : ");
	scanf("%d",&n);
	
	FILE *fp=fopen("Divisors.txt","w");
	
	fprintf(fp,"��� : ");
	
	for(i=1;i<=n;i++){
		if(n%i==0){
			fprintf(fp,"%d ",i);
			j++;
			sum+=i;
		}

	}
	
	fprintf(fp,"\n����� ���� : %d\n����� �� : %d",j,sum);
}
