#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findar(int *ar,int num);

int main(){
	int ar[10]={0};
	int i,num,*p;
	
	srand(time(NULL));
	
	for(i=0;i<=9;i++){
		*(ar+i)=rand()%100;
	}
	
	printf("100 미만의 정수 입력 : ");
	scanf("%d",&num);
	
	printf("위치 : %p",findar(ar,num));
}

int findar(int *ar,int num){
	int i,j;
	for(i=0;i<=9;i++){
		printf("%d\n",*(ar+i));
		if(*(ar+i)==num){
			return (ar+i);
		}
	}
}
