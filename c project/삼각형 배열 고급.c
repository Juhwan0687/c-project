#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,y,z,k,g;
	printf("���� �Է� : ");
	scanf("%d",&z);
	for(x=z;x>=1;x--){
		for(g=1;g<=(z-x)*2;g++){
			printf(" ");
		}
		for(y=x;y>=1;y--){
			printf("%d ",y);
		}
		for(k=2;k<=x;k++){
			printf("%d ",k);
		}
		printf("\n");
	}
}
