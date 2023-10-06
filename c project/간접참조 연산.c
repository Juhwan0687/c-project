#include <stdio.h>

int main(){
	int ar[]={11,21,31,41,51,61,71};
	int *p,i;
	
	p=ar;
	
	for(i=0;i<=6;i++){
		printf("%d\n",*(p+i));
	}
}
