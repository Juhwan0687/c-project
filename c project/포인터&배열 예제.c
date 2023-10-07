#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void inputdata(int *p);
void printarray(int ar[]);
int getmax(int *ar);
int getmin(int *ar);

int main(){
	int ar[10]={0};
	int max,min;
	
	printf("배열의 초기값 : ");
	
	printarray(ar);
	inputdata(ar);
	printf("\n배열의 값 : ");
	printarray(ar);
	max=getmax(ar);
	min=getmin(ar);
	printf("\n\n최댓값 : %d\n최솟값 : %d",max,min);
}

void inputdata(int *p){
	int i;
	srand(time(NULL));
	for(i=0;i<=9;i++){
		*(p+i)=rand()%100;
	}
}

void printarray(int ar[]){
	int i;
	
	for(i=0;i<=9;i++){
		printf("%d ",ar[i]);
	}
}

int getmax(int *ar){
	int i,j,n1,n2,max;
	
	for(i=0;i<=9;i++){
		n1=*(ar+i);
		for(j=0;j<=9;j++){
			if(i==j){
				continue;
			}
			n2=*(ar+j);
			if(max<n2){
				max=n2;
				break;
			}
			else if(n1>max){
				max=n1;
			}
		}
	}
	return max;
}

int getmin(int *ar){
	int i,j,n1,n2,min;
	
	for(i=0;i<=9;i++){
		n1=*(ar+i);
		for(j=0;j<=9;j++){
			if(i==j){
				continue;
			}
			n2=*(ar+j);
			if(min>n2){
				min=n2;
				break;
			}
			else if(n1<min){
				min=n1;
			}
		}
	}
	return min;
}
