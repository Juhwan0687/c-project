#include <stdio.h>
#include <math.h>

int main(){
	double x,y;
	
	printf("실수를 입력하고 enter>");
	scanf("%lf",&x);
	printf("실수를 입력하고 enter>");
	scanf("%lf",&y);
	
	printf("\nx의 y 제곱=%lf, y의 x 제곱=%lf",pow(x,y),pow(y,x));
}
