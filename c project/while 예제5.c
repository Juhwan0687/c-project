#include <stdio.h>

int main(){
	int n,m,i;
	scanf("%d %d",&n,&m);
	i=1;
	m--;
	while(i<=n){
		printf("%d ",i);
		i++;
		if(i==n+1&&m!=0){
			i=1;
			printf("\n");
			m-=1;
		}
	}
}
