#include <stdio.h>
#include <math.h>

int main(){
	double x,y;
	
	printf("�Ǽ��� �Է��ϰ� enter>");
	scanf("%lf",&x);
	printf("�Ǽ��� �Է��ϰ� enter>");
	scanf("%lf",&y);
	
	printf("�� 1 : %lf\n�� 2 : %lf\n�� 3 : %lf\n�� 4 : %lf",pow(x,2)+pow(y,2),pow(x+y,2),pow(fabs(x)+fabs(y),2),sqrt(pow(x,2)+pow(y,2)));
}
