#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,y,z,k,g;
	printf("정수 입력 : ");
	scanf("%d",&z);
	for(x=1;x<=z;x++){
		for(y=1;y<=(z-x)*2;y++){
			printf(" ");
		}
		for(k=1;k<=x;k++){
			printf("%d ",k);
		}
		for(g=x-1;g>=1;g--){
			printf("%d ",g);
		}
		printf("\n");
	}
}
