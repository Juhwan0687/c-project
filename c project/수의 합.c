#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,y,z,f,g;
	scanf("%d",&g);
	for(x=1;x<=g;x++){
		for(y=1;y<=x-1;y++)
		{
			printf("%d+",y);
			z+=y;
		}
		printf("%d",x);
		z+=x;
		printf("=%d\n",z);
		f+=z;
		z=0;
	}	
	printf("Total : %d",f);
}
