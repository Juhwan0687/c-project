#include <stdio.h>

int ShowSum(int a, int b);

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	ShowSum(a,b);
}

int ShowSum(int a,int b){
	int x,y,z;
	if(a%b==a){
		for(x=a;x<=b;x++){
			printf("%d ",x);
			z+=x;	
		}
		printf("\n%d",z);
		return 0;
	}
	else{
		for(y=b;y<=a;y++){
			printf("%d ",y);
			z+=y;
		}	
		printf("\n%d",z);
		return 0;
	}
}
