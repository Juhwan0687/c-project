#include <stdio.h>
#include <stdlib.h>

int main(){
	int ar[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	int *pr;
	
	printf("%d %d %d\n",sizeof(ar),sizeof(ar[0]),sizeof(int));
	
	for(i=0;i<sizeof(ar)/sizeof(ar[0]);i++){
		printf("%d ",ar[i]);
	}
	
	printf("\nSize = %d\n",sizeof(ar));
	
	pr=(int*)malloc(80);
	
	for(i=1;i<=20;i++){
		pr[i-1]=i;
	}
	
	for(i=0;i<=19;i++){
		printf("%d ",pr[i]);
	}
	
	free(pr);
}
