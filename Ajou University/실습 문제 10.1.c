#include <stdio.h>
#include <math.h>

int main(){
	int i;
	
	while(1){
		printf("숫자 입력 후 enter>");
		scanf("%d",&i);
		
		if(i==0){
			break;
		}
		
		printf("%d의 절댓값=%d\n\n",i,abs(i));
	}
}
