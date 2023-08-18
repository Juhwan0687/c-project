#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=1;
	int j=7;
	do{
		printf("%dÇÐ³â ",i);
		
		++i;
		do{
			printf("%d¹Ý ",j);
			--j;
		}while(j>=1);
		j=7;
		printf("\n");
	}while(i<=6);
}
