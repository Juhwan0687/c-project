#include <stdio.h>

int main(){
	int ar[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int *p;
	int i;
	
	p=ar;
	
	for(i=0;i<=(sizeof(ar)/sizeof(int))-1;i++){
		printf("%d\n",*(p+i));
	}
}
