#include <stdio.h>

void PrintArray(int ar[]);
void InputData(int *p);

int main(){
	int ar[20]={0};
	
	PrintArray(ar);
	InputData(ar);
	PrintArray(ar);
}

void PrintArray(int ar[]){
	int *p,i;
	
	p=ar;
	
	for(i=0;i<=19;i++){
		printf("%d ",*(p+i));
	}
}

void InputData(int *p){
	int i;
	puts("\n�迭�� ��� �Է� : ");
	for(i=0;i<=19;i++){
		scanf("%d",p+i);
	}
}
