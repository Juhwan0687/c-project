#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int ar[10];
	int n,i,j,sum=0;
	srand(time(NULL));
	for(i=0;i<=9;i++){
		n=rand()%10;
		ar[i]=n;
		printf("%d ",n);
	}
	for(j=0;j<=9;j++){
		sum+=ar[j];
	}
	printf("\n%d",sum);
}
