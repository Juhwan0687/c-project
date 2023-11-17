#include <stdio.h>
#include <time.h>

int main(){
	int len;
	int j;
	
	printf("Input length : ");
	scanf("%d",&len);
	
	double *ar;
	
	ar=(double*)malloc(sizeof(double)*len);
	
	srand(time(NULL));
	
	for(int i=0;i<len;i++){
		ar[i]=rand()%10000*0.01;
	}
	
	for(int i=0;i<len;i++){
		printf("%.2lf ",ar[i]);
	}
	
	free(ar);
}
