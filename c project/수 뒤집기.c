#include <stdio.h>

int DigitNumber(int n);

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",DigitNumber(n));
}

int DigitNumber(int n){
	int z,t=0,x,a=10,g=10,j,sum=0;
	if(n>=10){
		t+=1;
		for(z=1;n/z>=10;z*=10){
			t++;
		}
	}
	else{
		t=1;
	}
	for(j=t-1;j>=1;j--){
		g*=10;
	}
	for(g=g/10;g>=10;g/=10){
		x=n%a;
		n-=x;
		sum+=x*g;
		a*=10;
		g/=10;
	}
	sum+=n%a/10;
	sum+=n/a;
	return sum;
}
