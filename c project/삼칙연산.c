#include <stdio.h>

int main(){
	double f1,f2,f3;
	double *p1,*p2,*p3;
	
	p1=&f1;
	p2=&f2;
	p3=&f3;
	
	printf("�Ǽ� �Է� : ");
	scanf("%lf",&f1);
	printf("�Ǽ� �Է� : ");
	scanf("%lf",&f2);
	f3=*p1+*p2;
	printf("%lf+%lf=%lf\n",f1,f2,*p3);
	
	printf("�Ǽ� �Է� : ");
	scanf("%lf",p1);
	printf("�Ǽ� �Է� : ");
	scanf("%lf",p2);
	*p3=f1-f2;
	printf("%lf-%lf=%lf\n",*p1,*p2,f3);
	
	printf("�Ǽ� 2�� �Է� : ");
	scanf("%lf %lf",p1,&f2);
	*p3=f1* *p2;
	printf("%lf*%lf=%lf",f1,*p2,f3);
}
