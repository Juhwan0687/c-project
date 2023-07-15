#include <stdio.h>
#include <stdlib.h>

int main(){
	double a,b,c;
	printf("실수 3개 입력 : ");
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%lf\n",a);
		if(b>c)
		{
			printf("%lf\n%lf",b,c);
		}
		else
		{
			printf("%lf\n%lf",c,b);
		}
	}
	if(b>c&&b>a)
	{
		printf("%lf\n",b);
		if(a>c)
		{
			printf("%lf\n%lf",a,c);
		}
		else
		{
			printf("%lf\n%lf",c,a);
		}
	}
	if(c>b&&c>a)
	{
		printf("%lf\n",c);
		if(b>a)
		{
			printf("%lf\n%lf",b,a);
		}
		else
		{
			printf("%lf\n%lf",a,b);
		}
	}
	return 0;
}
