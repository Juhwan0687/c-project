#include <stdio.h>

int main(){
	int a,b;
	
	printf("정수를 입력하고 enter> ");
	scanf("%d",&a);
	printf("정수를 입력하고 enter> ");
	scanf("%d",&b);
	
	if(a==b){
		printf("같은 값을 입력했습니다.");
	}
	else if(a>b){
		printf("a를 b로 나눈 나머지는 %d입니다.",a%b);
	}
	else{
		printf("b를 a로 나눈 나머지는 %d입니다.",b%a);
	} 
}
