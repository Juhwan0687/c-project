#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int ar[6][6]={0};
	int i,j,sum=0,max;
	
	srand(time(NULL));
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			ar[i][j]=rand()%99+1;
		}
	}
	
	i=0;
	while(i<6){
		j=0;
		while(j<6){
			printf("%3d",ar[i][j]);
			j++;
			sum+=ar[i][j];
		}
		printf("\n");
		i++;
	}
	printf("\nÃÑ ÇÕ : %d",sum);
	max=ar[0][0];
	for(i=0;i<6;i++){
		for(j=1;j<6;j++){
			if(ar[i][j]>max){
				max=ar[i][j];
			}
		}
	}
	printf("\n\nÃÖ´ñ°ª : %d",max);
}
