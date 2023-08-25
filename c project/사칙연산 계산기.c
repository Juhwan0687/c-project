#include <stdio.h>

double add(int num1,int num2);
double min(int num1,int num2);
double mul(int num1,int num2);
double div(int num1,int num2);

int main(){
	int num1;
	int num2;
	scanf("%d %d",&num1,&num2);
	printf("%lf\n",add(num1,num2));
	printf("%lf\n",min(num1,num2));
	printf("%lf\n",mul(num1,num2));
	printf("%lf\n",div(num1,num2));
	return 0;
}

double add(num1,num2){
	return num1+num2;
}

double min(num1,num2){
	return num1-num2;
}

double mul(num1,num2){
	return num1*num2;
}

double div(num1,num2){
	return 1.0*num1/num2;
}
