#include <stdio.h>

int main(){
	int ar[3]={1,2,3};
	int ar2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	printf("%d\n",ar);
	printf("%d\n",&ar[0]);
	
	printf("%d\n",ar2);
	printf("%d\n",&ar2[0][0]/*||ar2[0]*/);
	
	printf("%d\n",&ar2[1][0]);
}
