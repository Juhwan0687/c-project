#include <stdio.h>

int main(){
	int n,a,b,c,d;
	printf("Write coin money : ");
	scanf("%d",&n);
	if(n%10!=0){
		printf("ERROR");
		exit(1);
	}
	a=n/500;
	b=(n-500*a)/100;
	c=n%100/50;
	d=n%50/10;
	printf("500won : %d\t100won : %d\t50won : %d\t10won : %d",a,b,c,d);
  printf("\nSum : %d",n);
}
