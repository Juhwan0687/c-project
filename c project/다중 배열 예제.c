#include <stdio.h>

int main(){
	int i,j,x=0,y,z,a,b;
	int ar[6][9]={{0,0,0,1,0,0,0,0,0},
				 { 0,0,0,0,0,0,0,2,0},
				 { 0,0,0,0,1,0,0,0,0},
				 { 0,2,0,1,0,0,1,0,0},
				 { 0,0,0,1,0,0,0,0,0},
				 { 0,0,1,0,0,0,1,0,0},
				 };
	for(i=0;i<=5;i++){
		for(j=0;j<=8;j++){
			if(ar[i][j]==1){
				x++;
			}
			if(ar[i][j]==2){
				printf("2의 좌표 : (%d, %d)\n",i,j);
			}
		}
	}
	printf("\n1의 개수 : %d\n\n",x);
	for(y=0;y<=5;y++){
		for(z=0;z<=8;z++){
			if(ar[y+1][z]==2||ar[y][z+1]==2||ar[y][z-1]==2||ar[y-1][z]==2){
				printf("%d ",ar[y][z]+5);
			}
			else{
				printf("%d ",ar[y][z]);
			}
		}
		printf("\n");
	}
	printf("\n");
	for(a=0;a<=5;a++){
		for(b=0;b<=8;b++){
			if(ar[a][b]!=0){
				printf("0 ");
			}
			else if(ar[a][b]==0){
				printf("1 ");
			}
		}
		printf("\n");
	}
}
