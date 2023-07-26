#include <stdio.h>

int main(){
	int n=-1;
	
	for(int i=0;i<10;i++){
		n=-1*n;
		printf("%d ",n);
	}
	printf("\n");
	for(int i=0;i<10;i++){
		n=-1*n;
		printf("%d ",(i+1)*n);
	}
	
	return 0;
}
