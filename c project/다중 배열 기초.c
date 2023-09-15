#include <stdio.h>
#include <stdlib.h>

int main() {
	puts("Ar1\n");
	int ar2[][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int ar3[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int i,j,x,y;
	for(i=0;i<=12/4-1;i++){
		for(j=0;j<=3;j++){
			printf("%2d ",ar2[i][j]);
		}
		printf("\n");
	}
	printf("\n\nAr2\n");
	for(x=0;x<=2;x++){
		for(y=0;y<=3;y++){
			printf("%2d ",ar3[x][y]);
		}
		printf("\n");
	}
}
