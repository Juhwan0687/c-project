#include <stdio.h>
#include <math.h>

int main(){
	int i;
	
	while(1){
		printf("���� �Է� �� enter>");
		scanf("%d",&i);
		
		if(i==0){
			break;
		}
		
		printf("%d�� ����=%d\n\n",i,abs(i));
	}
}
