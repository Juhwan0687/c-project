#include <stdio.h>

int main(){
	int mat_a[3][3]={{3,8,6},{4,1,7},{5,2,9}};
	int mat_b[3][3]={{1,4,9},{6,5,8},{2,3,7}};
	int i;
	
	printf("<대각 원소의 값>");
	
	for(i=0;i<3;i++){
		printf("\nMat-A[%d][%d] : %d / Mat-B[%d][%d] : %d",i,i,mat_a[i][i],i,i,mat_b[i][i]);
	}
}
