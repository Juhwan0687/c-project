#include <stdio.h>
#include <math.h>

int main(){
	double x,y;
	
	printf("실수를 입력하고 enter>");
	scanf("%lf",&x);
	printf("실수를 입력하고 enter>");
	scanf("%lf",&y);
	
	printf("식 1 : %lf\n식 2 : %lf\n식 3 : %lf\n식 4 : %lf",pow(x,2)+pow(y,2),pow(x+y,2),pow(fabs(x)+fabs(y),2),sqrt(pow(x,2)+pow(y,2)));
}
