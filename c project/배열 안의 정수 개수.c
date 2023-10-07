#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getnum(int *ar,int num);

int main(){
	int ar[10]={0};
	int i,num;
	
	srand(time(NULL));
	
	for(i=0;i<=9;i++){
		*(ar+i)=rand()%100;
	}
	
	puts("100 미만의 정수 입력 : ");
	scanf("%d",&num);
	printf("개수 : %d",getnum(ar,num));
}

int getnum(int *ar,int num){
	int i,count=0;
	
	for(i=0;i<=9;i++){
		printf("%d\n",*(ar+i));
		if(*(ar+i)==num){
			count++;
		}
	}
	
	return count;
}
