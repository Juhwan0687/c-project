#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printar(int *p);

int main(){
	int ar[100]={0};
	int i;
	
	srand(time(NULL));
	
	for(i=0;i<=99;i++){
		*(ar+i)=rand()%100;
	}
	
	printar(ar);
}

void printar(int *p){
	int i;
	
	for(i=0;i<=99;i++){
		printf("%2d ",*(p+i));
		if(i%10==9){
			printf("\n");
		}
	}
}
