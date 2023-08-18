#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,y,z,k,g;
	printf("정수 입력 : ");
	scanf("%d",&z);
	for(x=z;x>=1;x--){
		for(y=1;y<=(x-1)*2;y++){
			printf(" ");
		}
		for(k=x;k<=z;k++){
			printf("%d ",k);
		}
		printf("\n");
	}
}
