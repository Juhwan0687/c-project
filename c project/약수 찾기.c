#include <stdio.h>

int main(){
	int n;
	int i;
	printf("Write number : ");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i+=1)
	{
		if(n%i==0){
			printf("%d ",i);
		}
	}
}
