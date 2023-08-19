#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,y,b,z,i,j,k,g,a;
	printf("정수 입력 : ");
	scanf("%d",&z);
	for(x=1;x<=z;x++){
		for(y=1;y<=z-x;y++){
			printf("  ");
		}
		for(i=1;i<=x;i++){
			printf("%d ",i);
		}
		for(j=x-1;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	for(g=z-1;g>=1;g--){
		for(a=1;a<=z-g;a++){
			printf("  ");
		}
		for(b=1;b<=g-1;b++){
			printf("%d ",b);
		}
		for(k=g;k>=1;k--){
			printf("%d ",k);
		}
		printf("\n");
	}
}
