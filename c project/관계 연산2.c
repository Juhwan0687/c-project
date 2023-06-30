#include <stdio.h>

void main(){
	int res;
	
	res=0&&0;
	printf("%d\n",res);
	res=0&&1;
	printf("%d\n",res);
	res=1&&0;
	printf("%d\n",res);
	res=1&&1;
	printf("%d\n",res);
	
	res=0||0;
	printf("%d\n",res);
	res=0||1;
	printf("%d\n",res);
	res=1||0;
	printf("%d\n",res);
	res=1||1;
	printf("%d\n",res);
	
	printf("%d\n",!res);
}
