#include <stdio.h>

int main(){
	double a,b,c,d,e;
	printf("실수 5개 입력 : ");
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
	if(a>b&&a>c&&a>d&&a>e)
	{
		printf("%lf",a);
	}
	else if(b>a&&b>c&&b>d&&b>e)
	{
		printf("%lf",b);
	}
	else if(c>a&&c>b&&c>d&&c>e)
	{
		printf("%lf",c);
	}
	else if(d>a&&d>b&&d>c&&d>e)
	{
		printf("%lf",d);
	}
	else
	{
		printf("%lf",e);
	}
}
