#include <stdio.h>

int main(){
	int a,b;
	
	printf("������ �Է��ϰ� enter> ");
	scanf("%d",&a);
	printf("������ �Է��ϰ� enter> ");
	scanf("%d",&b);
	
	if(a==b){
		printf("���� ���� �Է��߽��ϴ�.");
	}
	else if(a>b){
		printf("a�� b�� ���� �������� %d�Դϴ�.",a%b);
	}
	else{
		printf("b�� a�� ���� �������� %d�Դϴ�.",b%a);
	} 
}
