#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=1;
	int j=7;
	do{
		printf("%d�г� ",i);
		
		++i;
		do{
			printf("%d�� ",j);
			--j;
		}while(j>=1);
		j=7;
		printf("\n");
	}while(i<=6);
}
