#include <stdio.h>

int main(){
	int i,j,a;
	int ar[10]={10,20,30,40,50,60,70,80,90,100};
	int br[10];
	for(a=0;a<=9;a++){
		scanf("%d",&br[a]);
	}	
	printf("\n\n");
	for(i=0;i<=9;i++){
		printf("%d\n",ar[i]);
	}
	printf("\n\n");
	for(j=0;j<=9;j++){
		printf("%d\n",br[j]);
	}
}
