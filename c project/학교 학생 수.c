#include <stdio.h>

int main(){
	int i,j,grade,x,sum=0,clas,y,sum2=0;
	int edu[6][5]={{23,22,27,21,24},
					 {21,22,25,24,23},
					 {20,23,22,21,24},
					 {25,26,24,27,28},
					 {26,24,28,29,26},
					 {27,28,29,26,27}};
	
	for(i=0;i<=5;i++){
		for(j=0;j<=4;j++){
			printf("%d ",edu[i][j]);
		}
		printf("\n");
	}
	printf("\n�ʵ��б� �г� �Է� : ");
	scanf("%d",&grade);
	printf("\n�ݺ� �л� �� : ");
	for(x=0;x<=4;x++){
		printf("%d ",edu[grade-1][x]);
		sum+=edu[grade-1][x];
	}
	printf("\n��ü �л� �� : %d",sum);
	printf("\n\n�� �Է� : ");
	scanf("%d",&clas);
	printf("\n");
	for(y=0;y<=5;y++){
		printf("%d ",edu[y][clas-1]);
		sum2+=edu[y][clas-1];
	}
	printf("\n��ü �л� �� : %d",sum2);
}
