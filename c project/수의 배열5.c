#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,y,z,k;
	scanf("%d",&z);
	for(x=1;x<=z;x++){
		for(y=1;y<=z-x;y++)
		{
			printf("  ");
		}
		for(k=x;k>=1;k--){
			printf("%2d",k);
		}
		printf("\n");
	}
}
