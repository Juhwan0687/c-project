#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,y,z;
	scanf("%d",&z);
	for(x=1;x<=z;x++){
		printf("%d :",x);
		for(y=1;y<=x;y++)
		{
			if(x%y==0){
				printf(" %d",y);
			}
		}
		printf("\n");
	}
}
