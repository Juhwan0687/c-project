#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i,a,b,c,d,e,f;
	
	srand(time(NULL));
	
	printf("<6개의 로또 번호 출력>\n");
	
	for(i=0;i<6;i++){
		printf("%d\n",rand()%45+1);
	}
}
