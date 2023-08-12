#include <stdio.h>

int main(){
	int n,i,j=0;
	printf("Write number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i+=1){
		if(n%i==0){
			j+=1;
		}
	}
	if(j==2){
		printf("\nThis number is Prime Number.");
	}
	else{
		printf("\nThis number isn't Prime Number.");
	}
}
