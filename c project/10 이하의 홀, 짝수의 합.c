#include <stdio.h>

int main(){
	int n=10;
	int sum;
	int sum2;
	switch(n%2){
		case 0:
			sum2+=(2+10)*5/2;
		default:
			sum+=(1+9)*5/2;
	}
	printf("Odd : %d\nEven : %d",sum,sum2);
}
