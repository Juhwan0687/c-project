#include <stdio.h>

int main(){
	char nation[4][20];
	int i;
	
	for(i=0;i<4;i++){
		printf("���� �̸��� �ѱ۷� �Է��ϰ� enter>");
		gets(nation[i]); 
	}
	
	for(i=3;i>=0;i--){
		printf("%s\n",nation[i]);
	}
}
