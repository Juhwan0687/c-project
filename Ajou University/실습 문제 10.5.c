#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i,a,b,c,d,e,f;
	
	srand(time(NULL));
	
	printf("<6���� �ζ� ��ȣ ���>\n");
	
	for(i=0;i<6;i++){
		printf("%d\n",rand()%45+1);
	}
}
