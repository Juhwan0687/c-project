#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int n,ar[10],i=0,j,x;
	printf("#############\n#가로 그래프#\n#############\n");
	srand(time(NULL));
	while(i!=10){
		n=rand()%60;
		if(n<20){
			continue;
		}
		ar[i]=n;
		i++;
	}
	for(j=0;j<=9;j++){
		printf("ar[%d] : ",j);
		for(x=1;x<=ar[j];x++){
			printf("*");
		}
		printf("%d\n",ar[j]);
	}
}
