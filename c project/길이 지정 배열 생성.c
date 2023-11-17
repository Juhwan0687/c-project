#include <stdio.h>
#include <time.h>

int main(){
	int len;
	
	printf("Input length : ");
	scanf("%d",&len);
	
	int *ar;
	
	ar=(int*)malloc(len*4);
	
	srand(time(NULL));
	
	for(int i=0;i<len;i++){
		ar[i]=rand()%100;
	}
	
	for(int i=0;i<len;i++){
		printf("%d ",ar[i]);
	}
	
	free(ar);
}
