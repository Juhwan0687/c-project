#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=6;
	int j=1;
	while(i>=1){
		printf("%d�г� ",i);
		while(j<=7){
			printf("%d�� ",j);
			++j;
		}
		j=1;
		--i;
		printf("\n");
	}
}
