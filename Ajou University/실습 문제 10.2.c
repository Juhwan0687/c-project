#include <stdio.h>
#include <math.h>

int main(){
	double x,y;
	
	printf("�Ǽ��� �Է��ϰ� enter>");
	scanf("%lf",&x);
	printf("�Ǽ��� �Է��ϰ� enter>");
	scanf("%lf",&y);
	
	printf("\nx�� y ����=%lf, y�� x ����=%lf",pow(x,y),pow(y,x));
}
