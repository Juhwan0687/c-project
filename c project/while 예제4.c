#include <stdio.h>

int main(){
	int i,n,c;
	scanf("%d",&c);
	i=0;
	n=1;
	while(i<=c-1){
		printf("%d ",n);
		n*=-1;
		i++;
	}
}
