#include <stdio.h>
#include <stdlib.h>

void main()
{
	double eye_r;
	double eye_l;
	
	printf("양쪽 시력을 입력해주세요. : ");
	scanf("%lf %lf", &eye_r,&eye_l);
	printf("오른쪽 시력 : %.1lf\n왼쪽 시력 : %.1lf\n",eye_r,eye_l);
}
