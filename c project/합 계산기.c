#include <stdio.h>

int add(int n);

int main(){
	int n;
	scanf("%d",&n);
	printf("\n%d",add(n));
}

int add(int n){
	int i,e=0;
	for(i=1;i<=n;i++){
		e+=i;
	}
	return e;
}
